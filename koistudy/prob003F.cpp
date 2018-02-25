#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", MIN(a,MIN(b,c)));
    return 0;
}
