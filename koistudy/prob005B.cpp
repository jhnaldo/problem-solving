#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int gcd(int a, int b){
    if (a < b) swap(a,b);
    while (a%b) {
        a %= b;
        swap(a,b);
    }
    return b;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", lcm(a,lcm(b,c)));
    return 0;
}
