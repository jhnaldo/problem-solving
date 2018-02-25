#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int rev (int k){
    int res = 0;
    while(k){
        res *= 10;
        res += k%10;
        k/=10;
    }
    return res;
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    a = rev(a);
    b = rev(b);
    printf("%d\n", MAX(a,b));
}
