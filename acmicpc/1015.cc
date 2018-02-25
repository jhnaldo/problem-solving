#include <stdio.h>

int main(){
    int n, i, j;
    int arr[50], idx[50] = {0,};
    scanf("%d", &n);
    scanf("%d", &arr[0]);
    for (i = 1; i < n; i++){
        scanf("%d", &arr[i]);
        for (j = 0; j < i; j++){
            if (arr[j] <= arr[i]) idx[i]++;
            else idx[j]++;
        }
    }
    for (i = 0 ; i < n; i++)
        printf("%d ", idx[i]);
    printf("\n");
    return 0;
}
