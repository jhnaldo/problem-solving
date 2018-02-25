#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        double k;
        char str[3];
        scanf("%lf %s", &k, str);
        if (!strcmp(str, "kg")){
            printf("%.4lf lb\n", k*2.2046);
        }else if (!strcmp(str, "lb")){
            printf("%.4lf kg\n", k*0.4536);
        }else if (!strcmp(str, "l")){
            printf("%.4lf g\n", k*0.2642);
        }else if (!strcmp(str, "g")){
            printf("%.4lf l\n", k*3.7854);
        }
    }
    return 0;
}
