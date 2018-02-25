#include <stdio.h>

void swap (int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int t, i = 1;

    scanf("%d", &t);
    while (t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a > b) swap(a,b);
        if (b > c) swap(b,c);
        if (a > b) swap(a,b);

        printf("Case #%d: ", i);
        if (a + b <= c) printf("invalid!\n");
        else if (a == b && b == c) printf("equilateral\n");
        else if (a == b || b == c || a == b) printf("isosceles\n");
        else printf("scalene\n");
        i++;
    }
    return 0;
}
