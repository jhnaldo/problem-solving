#include <stdio.h>

#define BOUND 1000000007

int main(){
    int n;
    int arr[300][300];
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }

    if (arr[0][0] == 0) arr[0][0] = -1;

    for (j = 1; j < n; j++){
        if (arr[0][j] == 1) arr[0][j] = arr[0][j-1];
        else arr[0][j] = -1;
    }

    for (i = 1; i < n; i++){
        if (arr[i][0]) arr[i][0] = arr[i-1][0];
        else arr[i][0] = -1;
        for (j = 1; j < n; j++){
            if (arr[i][j]){
                arr[i][j] = 0;
                if (arr[i-1][j] == -1 && arr[i][j-1] == -1){
                    arr[i][j] = -1;
                    continue;
                }
                if (arr[i-1][j] == -1) arr[i][j]++;
                if (arr[i][j-1] == -1) arr[i][j]++;
                arr[i][j] += (arr[i][j-1] + arr[i-1][j]) % BOUND;
            }else arr[i][j] = -1;
        }
    }
    printf("%d\n", arr[n-1][n-1]);
    return 0;
}
