#include <stdio.h>

int main(){
    int n;
    int count[101][3] = {};
    int arr[2000][3];
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
            count[arr[i][j]][j]++;
        }
    }
    for (i = 0; i < n; i++){
        int sum = 0;
        for (j = 0; j < 3; j++)
            sum += (count[arr[i][j]][j] == 1? arr[i][j]: 0);
        printf("%d\n", sum);
    }
    return 0;
}
