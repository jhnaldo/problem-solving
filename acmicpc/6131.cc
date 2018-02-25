#include <stdio.h>

int main(){
    int n, count = 0;

    scanf("%d", &n);
    for (int i = 1; i*i < n; i++){
        if (n % i == 0 && (n / i + i) % 2 == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
