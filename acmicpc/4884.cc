#include <stdio.h>

int main(){
    while (true){
        long long int g, t, a, d, tournament, want;
        scanf("%lld %lld %lld %lld", &g, &t, &a, &d);
        if (g == -1) break;
        tournament = g*a+d;
        for (want=1; tournament > want; want*=2);
        printf("%lld*%lld/%lld+%lld=%lld+%lld\n", g, a, t, d, g*(t*(t-1)/2)+want-1, want-tournament);
    }
    return 0;
}
