#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int l, n;
    int i;
    int value, min, max;
    scanf("%d %d", &l, &n);
    scanf("%d", &value);
    min = MIN(value, l-value);
    max = MAX(value, l-value);
    for (i = 1; i < n; i++){
        scanf("%d", &value);
        min = MAX(min, MIN(value, l-value));
        max = MAX(max, MAX(value, l-value));
    }
    printf("%d %d\n", min, max);
    return 0;
}
