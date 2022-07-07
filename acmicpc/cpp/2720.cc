#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, i;
        int arr[4] = {25, 10, 5, 1};
        scanf("%d", &n);
        for (i = 0; i < 4; i++){
            printf("%d ", n/arr[i]);
            n %= arr[i];
        }
        printf("\n");
    }
    return 0;
}
