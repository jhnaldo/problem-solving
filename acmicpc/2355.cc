#include <stdio.h>

int main(){
    long long from, to, ans;
    scanf("%lld %lld", &from, &to);
    if (from > to) {
        ans = from;
        from = to;
        to = ans;
    }

    if ((from + to) % 2) {
        ans = (to - from + 1) / 2 * (from + to);
    } else {
        ans = (from + to) / 2 * (to - from + 1);
    }

    printf("%lld\n", ans);
    return 0;
}
