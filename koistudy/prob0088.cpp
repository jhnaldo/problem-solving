#include <stdio.h>

int main(){
    int n, k, i, index = -1;
    int arr[100000];
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++){
        if (arr[i] == k){
            index = i+1;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}
