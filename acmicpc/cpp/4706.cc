#include <stdio.h>
#include <math.h>

int main(){
    while (true){
        double a, b;
        scanf("%lf %lf", &a, &b);
        if (!a && !b) break;
        printf("%.3lf\n", sqrt(1-(b/a)*(b/a)));
    }
    return 0;
}
