#include <stdio.h>

#define MIN(a, b) ((a)<(b)?(a):(b))

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d\n", MIN(a, MIN(b, c)) + MIN(d, e) - 50);
    return 0;
}
