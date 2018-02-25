#include <stdio.h>

int main(){
    int n, m;
    int arr[102][102] = {0,}, remain = 0;
    int x_stack[10000], y_stack[10000], size = 0;
    int i, j, ans, before;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){
            scanf("%d", &arr[i][j]);
            if (arr[i][j]) remain++;
        }
    }

    before = 0;
    for (ans = 0; remain; ans++){
        int check[102][102] = {0,};
        before = remain;

        size = 1;
        x_stack[0] = y_stack[0] = 0;
        check[0][0] = true;
        while (size){
            size--;
            int x = x_stack[size];
            int y = y_stack[size];
            if (!arr[x][y]){
                if (x > 0 && !check[x-1][y]) { check[x-1][y] = true; x_stack[size] = x-1; y_stack[size] = y; size++; }
                if (y > 0 && !check[x][y-1]) { check[x][y-1] = true; x_stack[size] = x; y_stack[size] = y-1; size++; }
                if (x <= n && !check[x+1][y]) { check[x+1][y] = true; x_stack[size] = x+1; y_stack[size] = y; size++; }
                if (y <= m && !check[x][y+1]) { check[x][y+1] = true; x_stack[size] = x; y_stack[size] = y+1; size++; }
            }
        }
        for (i = 0; i <= n+1; i++){
            for (j = 0; j <= m+1; j++){
                if (arr[i][j] && check[i][j]){
                    arr[i][j] = 0;
                    remain--;
                }
            }
        }
    }
    printf("%d\n%d\n", ans, before);
    return 0;
}
