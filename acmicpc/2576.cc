#include <stdio.h>

int main(){
    int num;
    int i, sum, min;

    sum = min = 0;
    for (i = 0; i < 7; i++){
        scanf("%d", &num);
        if (num % 2){
            sum += num;
            if (!min || min > num){
                min = num;
            }
        }
    }
    if (sum){
        printf("%d\n%d\n", sum, min);
    }else{
        printf("-1\n");
    }
    return 0;
}
