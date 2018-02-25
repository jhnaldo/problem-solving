#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int get(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) return 10000 + a*1000;
    if (a == b || b == c) return 1000 + b*100;
    if (a == c) return 1000 + a*100;
    return MAX(a, MAX(b, c));
}

int main(){
    int n, max;
    scanf("%d", &n);
    max = get();
    while (--n){
        int value = get();
        max = MAX(max, value);
    }
    printf("%d\n", max);
    return 0;
}
