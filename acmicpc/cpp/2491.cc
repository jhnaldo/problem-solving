#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int n, before, num;
    int up, down, up_max, down_max;
    int i, j;

    scanf("%d", &n);
    scanf("%d", &before);
    up = down = up_max = down_max = 1;
    for (i = 1; i < n; i++){
        scanf("%d", &num);
        if (before <= num) up++; else up = 1;
        if (before >= num) down++; else down = 1;
        before = num;
        up_max = MAX(up_max, up);
        down_max = MAX(down_max, down);
    }

    printf("%d\n", MAX(up_max, down_max));
    return 0;
}
