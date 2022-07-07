#include <stdio.h>

void check(int x, int y, int& k_x, int& k_y, int cur, int k){
    if (cur == k){
        k_x = x;
        k_y = y;
    }
}

int main(){
    int n, k;
    int arr[999][999];
    int i, j;
    int x, y, k_x, k_y, cur;

    scanf("%d\n%d", &n, &k);
    x = y = n/2;
    arr[x][y] = cur = 1;
    for (i = 1; i < n; i++){
        if (i%2){
            for (j = 0; j < i; j++) { arr[--x][y] = ++cur; check(x, y, k_x, k_y, cur, k); }
            for (j = 0; j < i; j++) { arr[x][++y] = ++cur; check(x, y, k_x, k_y, cur, k); }
        }else{
            for (j = 0; j < i; j++) { arr[++x][y] = ++cur; check(x, y, k_x, k_y, cur, k); }
            for (j = 0; j < i; j++) { arr[x][--y] = ++cur; check(x, y, k_x, k_y, cur, k); }
        }
    }

    for (i = 1; i < n; i++) { arr[--x][y] = ++cur; check(x, y, k_x, k_y, cur, k); }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("%d %d\n", k_x+1, k_y+1);
    return 0;
}
