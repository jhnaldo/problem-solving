#include <stdio.h>

#define MIN(a,b) (a<b?a:b)

int main(){
    int m, n, tmp;
    int five_up, two_up, five_down, two_down;

    scanf("%d %d", &m, &n);
    five_up = two_up = 0;

    tmp = m; while (tmp) five_up += (tmp /= 5);
    tmp = m; while (tmp) two_up += (tmp /= 2);

    five_down = two_down = 0;
    tmp = n; while (tmp) five_down += (tmp /= 5);
    tmp = n; while (tmp) two_down += (tmp /= 2);
    five_up -= five_down;
    two_up -= two_down;

    five_down = two_down = 0;
    tmp = m-n; while (tmp) five_down += (tmp /= 5);
    tmp = m-n; while (tmp) two_down += (tmp /= 2);
    five_up -= five_down;
    two_up -= two_down;

    printf ("%d\n", MIN(five_up, two_up));

    return 0;
}
