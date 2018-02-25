#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, D;
    scanf("%d %d %d", &a, &b, &c);
    D = b*b - 4*a*c;
    if (D > 0){
        printf("%g\n%g\n", (sqrt(D) - b)/2.0/a, (-sqrt(D) - b)/2.0/a);
    }else if (D == 0){
        printf("%g\n", -b/2.0/a);
    }else{
        printf("none.\n");
    }
    return 0;
}
