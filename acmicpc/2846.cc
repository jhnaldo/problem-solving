#include <stdio.h>

int main(){
    int n, i;
    int before, cur, size, max;
    scanf("%d", &n);
    scanf("%d", &before);
    size = 0;
    max = 0;
    for (i = 0; i < n-1; i++){
        scanf("%d", &cur);
        size = (before < cur? size+cur-before: 0);
        max = (max<size?size:max);
        before = cur;
    }
    printf("%d\n", max);
    return 0;
}
