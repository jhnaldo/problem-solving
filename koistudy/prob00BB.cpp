#include <stdio.h>

int main(){
    int n;
    int i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (n % i == 0) sum += i;
    printf("%d\n", sum);
    return 0;
}
