#include <stdio.h>

#define check(x) (a < x && x < b)

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b) swap(a,b);
    if ((check(c) && !check(d))
            || (!check(c) && check(d)))
        printf("cross\n");
    else printf("not cross\n");
    return 0;
}
