#include <stdio.h>

int main(){
    int sum = 0;
    int i;

    sum = 0;
    for (i = 0; i < 4; i++){
        int duration;
        scanf("%d", &duration);
        sum += duration;
    }
    printf("%d\n%d\n", sum/60, sum%60);
}
