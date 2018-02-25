#include <stdio.h>

void swap (int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int gcd (int a, int b){
    if (a < b) swap(a,b);
    while (a % b){
        a %= b;
        swap(a,b);
    }
    return b;
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", gcd(a, gcd(b, c)));
    return 0;
}
