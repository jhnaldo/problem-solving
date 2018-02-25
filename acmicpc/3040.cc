#include <stdio.h>

int main(){
    int arr[9], sum = 0;
    int i, j, k;
    for (i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (i = 0; i < 8; i++){
        for (j = i+1; j < 9; j++){
            if (sum - arr[i] - arr[j] == 100){
                for (k = 0; k < 9; k++){
                    if (k != i && k != j)
                        printf("%d\n", arr[k]);
                }
            }
        }
    }
    return 0;
}
