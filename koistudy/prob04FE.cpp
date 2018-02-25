#include <stdio.h>

int get_gcd(int a, int b){
    if (a < b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    while (a % b){
        int tmp;
        a %= b;
        tmp = a;
        a = b;
        b = tmp;
    }
    return b;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d\n", get_gcd(x, y));
    return 0;
}
