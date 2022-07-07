#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n != -1){
        int i, arr[100000], size = 0;
        int sum = 0;
        for (i = 1; i < n; i++){
            if (n%i == 0){
                arr[size++] = i;
                sum += i;
            }
        }
        if (sum == n){
            printf("%d = 1", n);
            for (i = 1; i < size; i++)
                printf(" + %d", arr[i]);
            printf("\n");
        }else{
            printf("%d is NOT perfect.\n", n);
        }
        scanf("%d", &n);
    }
    return 0;
}
