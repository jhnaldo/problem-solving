#include <stdio.h>

int f(int n){
    int i, sum;
    for (i = 1, sum = 0; i <= n; i++)
        sum += i;
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
