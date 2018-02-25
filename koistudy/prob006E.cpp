#include <stdio.h>

int main(){
    const int height = 168;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= height) printf("CRASH %d\n", a);
    else if (b <= height) printf("CRASH %d\n", b);
    else if (c <= height) printf("CRASH %d\n", c);
    else printf("NO CRASH\n");

    return 0;
}
