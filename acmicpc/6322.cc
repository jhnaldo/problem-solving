#include <stdio.h>
#include <math.h>

int main(){
    int k = 1;
    while (true){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (!a && !b && !c)
            break;

        printf("Triangle #%d\n", k);
        if (a == -1){
            if (b > c) printf("Impossible.\n");
            else printf("a = %.3lf\n", sqrt(double(c*c-b*b)));
        }else if (b == -1){
            if (a > c) printf("Impossible.\n");
            else printf("b = %.3lf\n", sqrt(double(c*c-a*a)));
        }else{
            printf("c = %.3lf\n", sqrt(double(a*a+b*b)));
        }
        printf("\n");
        k++;
    }
    return 0;
}
