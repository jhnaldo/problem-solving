#include <stdio.h>

int main(){
    int n, m, i, j;
    int arr[100] = {0,};
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++){
        int x, y, k;
        scanf("%d %d %d", &x, &y, &k);
        for (j = x; j <= y; j++)
            arr[j-1] = k;
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
