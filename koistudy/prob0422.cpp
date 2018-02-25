#include <stdio.h>

int main(){
    int n, k;
    int arr[100000];
    int i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++){
        if (arr[i] > k)
            break;
    }
    printf("%d\n", i+1);
    return 0;
}
