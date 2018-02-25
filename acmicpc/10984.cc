#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int k, isum = 0;
        double dsum = 0.0;
        scanf("%d", &k);
        while (k--){
            int i;
            double d;
            scanf("%d %lf", &i, &d);
            isum += i;
            dsum += d*i;
        }
        printf("%d %.1lf\n", isum, (dsum / isum));
    }
    return 0;
}
