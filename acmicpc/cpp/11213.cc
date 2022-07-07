#include <stdio.h>

int main(){
    int n, i;
    int arr[6] = {0,};
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        int k;
        scanf("%d", &k);
        k--;
        if (arr[k] == 0){
            arr[k] = i;
        }else if(arr[k] > 0){
            arr[k] = -1;
        }
    }
    for (i = 5; i >= 0; i--){
        if (arr[i] > 0){
            printf("%d\n", arr[i]);
            break;
        }
    }
    if (i < 0)
        printf("none\n");
    return 0;
}
