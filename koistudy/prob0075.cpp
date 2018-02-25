#include <stdio.h>

int main(){
    int n;
    int prime[10000] = {};
    int size = 0, k, i, sum = 0;
    scanf("%d", &n);
    for (k = 2; k <= n; k++){
        for (i = 0; i < size; i++){
            if (k % prime[i] == 0) break;
        }
        if (i == size){
            prime[size++] = k;
            sum += k;
        }
    }
    printf("%d\n", sum);
    return 0;
}
