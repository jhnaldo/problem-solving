#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) swap(a,b);
    if (b > c) swap(b,c);
    if (a > b) swap(a,b);

    if (a + b <= c) printf("Not\n");
    else if (a == b && b == c) printf("Regular\n");
    else if (a == b || b == c) printf("Isosceles\n");
    else if (a*a + b*b == c*c) printf("Right\n");
    else printf("Normal\n");

    return 0;
}
