#include <stdio.h>

bool isPrime(int n){
    int i;
    if (n == 1) return false;
    for (i = 2; i*i <= n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++ )
        if(isPrime(i))
            ans += i;
    printf("%d", ans);
    return 0;
}
