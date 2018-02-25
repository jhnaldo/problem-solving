#include <stdio.h>

int f(int n){
    int count;
    for (count = 1; n > 1; count++){
        if (n % 2) n = 3*n + 1;
        else n /= 2;
    }
    return count;
}

void g(int &a, int &b)  // reference를 이용한 전달
{
    int t;
    t = a;
    a = b;
    b = t;
}

int get_max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b, ans = 0;
    scanf("%d%d", &a, &b);
    if( a > b )
        g(a, b);
    for(int i = a ; i <= b ; i++ )
        ans = get_max( ans, f(i) );
    printf("%d", ans);
    return 0;
}
