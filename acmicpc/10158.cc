#include <stdio.h>

int cal(int k, int n){
    if (k > n) return 2*n-k;
    else return k;
}

int main(){
    int w, h, p, q, t;

    scanf("%d %d", &w, &h);
    scanf("%d %d", &p, &q);
    scanf("%d", &t);
    printf("%d %d\n", cal((p+t)%(2*w), w), cal((q+t)%(2*h), h));
    return 0;
}
