#include <stdio.h>

void check(char arr[64][65], int from_x, int from_y, int to_x, int to_y){
    int i, j, count = 0;;
    for (i = from_x; i < to_x; i++){
        for (j = from_y; j < to_y; j++){
            count += arr[i][j]-'0';
        }
    }
    if (count == (to_x-from_x)*(to_y-from_y)){
        printf("1");
    }else if (count == 0){
        printf("0");
    }else{
        int mid_x = (from_x+to_x)/2, mid_y = (from_y+to_y)/2;
        printf("(");
        check(arr, from_x, from_y, mid_x, mid_y);
        check(arr, from_x, mid_y, mid_x, to_y);
        check(arr, mid_x, from_y, to_x, mid_y);
        check(arr, mid_x, mid_y, to_x, to_y);
        printf(")");
    }
}

int main(){
    int n;
    char arr[64][65];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", arr[i]);

    check (arr, 0, 0, n, n);
    printf("\n");
    return 0;
}
