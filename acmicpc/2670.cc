#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double num, max = 0, cur_max = 0;
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%lf", &num);
        if (cur_max < 1.0){
            cur_max = num;
        }else{
            cur_max *= num;
        }
        if (max < cur_max){
            max = cur_max;
        }
    }
    printf("%.3lf\n", floor((max+0.0005)*1000)/1000);
    return 0;
}
