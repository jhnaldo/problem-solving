#include <stdio.h>

int main(){
    int n, k;

    scanf("%d", &n);
    k = (n<60?0:n-60);
    for (; k <= n; k++){
        int sum = k;
        int tmp = k;
        while (k){
            sum += k%10;
            k /= 10;
        }
        k = tmp;
        if (sum == n){
            printf ("%d\n", k);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
