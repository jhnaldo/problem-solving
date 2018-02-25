#include <stdio.h>

void swap(long long int &x, long long int &y){
    long long int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a > b) swap(a,b);
        if (b > c) swap(b,c);
        if (a > b) swap(a,b);
        if (i) printf("\n");
        printf("Scenario #%d:\n%s\n", i+1, (a*a+b*b==c*c?"yes":"no"));
    }
    return 0;
}
