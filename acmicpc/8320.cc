#include <stdio.h>

int main(){
    int n;
    int i, sum = 0;

    scanf("%d", &n);
    for (i = 1; i*i <= n; i++){
        sum += (n/i) - i + 1;
    }
    printf("%d\n", sum);
    return 0;
}
