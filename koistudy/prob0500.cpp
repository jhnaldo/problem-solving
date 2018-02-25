#include <stdio.h>

int f(int n){
    int result = 0;
    while (n){
        result *= 10;
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
