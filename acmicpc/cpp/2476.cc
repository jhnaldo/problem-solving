#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int t;
    int max = 0;

    scanf("%d", &t);
    for (; t > 0; t--){
        int ans, a, b, c;
        scanf ("%d %d %d", &a, &b, &c);
        if (a == b && b == c) ans = 10000+a*1000;
        else if (a == b || b == c) ans = 1000+b*100;
        else if (a == c) ans = 1000+a*100;
        else ans = MAX(a, MAX(b, c))*100;
        max = MAX(max, ans);
    }
    printf("%d\n", max);
    return 0;
}
