#include <stdio.h>

int main(){
    int t, num;
    double arr[5] = {350.34, 230.90, 190.55, 125.30, 180.90};
    int i;

    scanf("%d", &t);
    for (; t > 0; t--){
        double sum = 0.0;
        for (i = 0; i < 5; i++){
            scanf("%d", &num);
            sum += num*arr[i];
        }
        printf("$%.2lf\n", sum);
    }
    return 0;
}
