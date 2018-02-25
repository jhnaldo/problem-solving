#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int a, b, c, d, e, f;
    int sum = 0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    sum += d+e+f;
    a = MAX(0, a-11*e);
    if (5*d > b){
        b = 0;
        a = MAX(0, a-4*(5*d-b));
    }else{
        b -= 5*d;
    }
    sum += (c?(c-1)/4+1:0);
    c %= 4;
    switch(c){
        case 1:
            if (5 > b){
                b = 0;
                a = MAX(0, a-4*(5-b)-7);
            }else{
                b -= 5;
                a = MAX(0, a-7);
            }
            break;
        case 2:
            if (3 > b){
                b = 0;
                a = MAX(0, a-4*(3-b)-6);
            }else{
                b -= 3;
                a = MAX(0, a-6);
            }
            break;
        case 3:
            if (1 > b){
                b = 0;
                a = MAX(0, a-4*(3-b)-6);
            }else{
                b -= 1;
                a = MAX(0, a-5);
            }
            break;
    }
    sum += (b?(b-1)/9+1:0);
    b %= 9;
    a = MAX(0, a-4*(9-b));
    sum += (a?(a-1)/36+1:0);
    printf ("%d\n", sum);
    return 0;
}
