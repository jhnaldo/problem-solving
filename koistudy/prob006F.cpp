#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    const int height = 168;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) swap(a,b);
    if (b > c) swap(b,c);
    if (a > b) swap(a,b);

    if (a == b || b == c) printf("Impossible\n");
    else printf("%d %d %d\n", a, b, c);

    return 0;
}
