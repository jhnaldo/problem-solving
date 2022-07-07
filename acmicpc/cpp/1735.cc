#include <stdio.h>

void swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}

int gcd (int a, int b){
    int k;
    if (a < b) swap(a,b);
    while((k = a%b)){
        a = b;
        b = k;
    }
    return b;
}

int main(){
    int a, b, c, d;
    int p, q, g;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    p = a*d+b*c;
    q = b*d;
    g = gcd(p,q);

    printf("%d %d\n", p/g, q/g);
}
