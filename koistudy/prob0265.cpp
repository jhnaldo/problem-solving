#include <stdio.h>

int main(){
    int h, m, d;
    scanf("%d %d %d", &h, &m, &d);
    d += h * 60 + m;
    printf("%d %d\n", d%1440/60, d%60);
    return 0;
}
