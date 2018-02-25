#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

int main(){
    int n;
    int pprev_x, pprev_y, prev_x, prev_y;
    int sum = 0;
    int min = 0;

    scanf("%d", &n);
    scanf("%d %d\n%d %d", &pprev_x, &pprev_y, &prev_x, &prev_y);
    sum = ABS(pprev_x-prev_x)+ABS(pprev_y-prev_y);
    for (int i = 2; i < n; i++){
        int x, y;
        int cur, diff;
        scanf("%d %d", &x, &y);
        cur = ABS(x-prev_x)+ABS(y-prev_y);
        diff = (ABS(x-pprev_x)+ABS(y-pprev_y))
            - (cur + ABS(prev_x-pprev_x)+ABS(prev_y-pprev_y));
        if (diff < min) min = diff;
        sum += cur;

        pprev_x = prev_x;
        pprev_y = prev_y;
        prev_x = x;
        prev_y = y;
    }
    printf("%d\n", sum+min);
    return 0;
}
