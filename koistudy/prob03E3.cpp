#include <stdio.h>

#define SQ(x) ((x) * (x))

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", SQ((1 << n) + 1));
    return 0;
}
