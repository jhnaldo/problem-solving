#include <stdio.h>

int main(){
    int n, i;
    int count[5] = {0,};
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        if (!x || !y) count[0]++;
        if (x > 0 && y > 0) count[1]++;
        if (x < 0 && y > 0) count[2]++;
        if (x < 0 && y < 0) count[3]++;
        if (x > 0 && y < 0) count[4]++;
    }

    for (i = 1; i <= 4; i++)
        printf("Q%d: %d\n", i, count[i]);
    printf("AXIS: %d\n", count[0]);
    return 0;
}
