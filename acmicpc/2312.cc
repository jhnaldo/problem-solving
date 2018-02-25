#include <stdio.h>

int main(){
    int t, n, i;
    int factor[10000], number[10000], size;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d", &n);
        size = 0;
        for (i = 2; n > 1; i++){
            if (n % i == 0){
                factor[size] = i;
                number[size] = 0;
                while (n % i == 0){
                    n /= i;
                    number[size]++;
                }
                size++;
            }
        }
        for (i = 0; i < size; i++){
            printf("%d %d\n", factor[i], number[i]);
        }
    }
    return 0;
}
