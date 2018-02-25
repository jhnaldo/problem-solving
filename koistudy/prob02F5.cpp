#include <stdio.h>

int main(){
    int n, i, j, count = 0;
    int arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        for (j = 0; j < i; j++){
            if (arr[i] % arr[j] == 0)
                count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
