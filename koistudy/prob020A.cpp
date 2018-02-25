#include <stdio.h>

int main(){
    int d, h, m;
    scanf("%d %d %d", &d, &h, &m);
    printf("%d\n", 1440*(d-14) + 60*h + m);
    return 0;
}
