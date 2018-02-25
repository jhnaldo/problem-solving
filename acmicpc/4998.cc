#include <stdio.h>

int main(){
    while(true){
        double n, b, m;
        int k;
        if(scanf("%lf %lf %lf", &n, &b, &m)==EOF) break;
        b /= 100;
        b += 1;
        for (k = 0; n <= m; k++) n *= b;
        printf("%d\n", k);
    }
    return 0;
}
