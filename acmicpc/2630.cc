#include <stdio.h>

void check(int arr[128][128], int from_x, int from_y, int to_x, int to_y, int &white, int &blue){
    int i, j, count = 0;;
    for (i = from_x; i < to_x; i++){
        for (j = from_y; j < to_y; j++){
            count += arr[i][j];
        }
    }
    if (count == (to_x-from_x)*(to_y-from_y)){
        blue++;
    }else if (count == 0){
        white++;
    }else{
        int mid_x = (from_x+to_x)/2, mid_y = (from_y+to_y)/2;
        check(arr, from_x, from_y, mid_x, mid_y, white, blue);
        check(arr, from_x, mid_y, mid_x, to_y, white, blue);
        check(arr, mid_x, from_y, to_x, mid_y, white, blue);
        check(arr, mid_x, mid_y, to_x, to_y, white, blue);
    }
}

int main(){
    int n;
    int arr[128][128];
    int i, j, white, blue;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }

    white = blue = 0;
    check (arr, 0, 0, n, n, white, blue);
    printf("%d\n%d\n", white, blue);
    return 0;
}
