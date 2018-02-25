#include <stdio.h>

int main(){
    int n, i;
    int before, max;
    scanf("%d", &n);
    scanf("%d", &before);
    max = before;
    for (i = 1; i < n; i++){
        int k;
        scanf("%d", &k);

        before = (before > 0?before:0) + k;
        if (max < before) max = before;
    }
    printf("%d\n", max);

    return 0;
}
