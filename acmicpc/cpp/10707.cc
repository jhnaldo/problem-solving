#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int x, b, c, y, p;
    int x_val, y_val;
    scanf("%d\n%d\n%d\n%d\n%d", &x, &b, &c, &y, &p);
    x_val = x*p;
    if (p <= c){
        y_val = b;
    }else{
        y_val = (p-c)*y + b;
    }
    printf("%d\n", MIN(x_val, y_val));
}
