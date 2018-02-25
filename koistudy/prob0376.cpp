#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))

int digit_sum(int n){
    if (n < 10) return n;
    return n % 10 + digit_sum(n / 10);
}

int main(){
    int min, max;
    int num, i;

    scanf("%d", &num);
    min = max = digit_sum(num);
    for (i = 0; i < 9; i++){
        int sum;
        scanf("%d", &num);
        sum = digit_sum(num);
        min = MIN(min, sum);
        max = MAX(max, sum);
    }
    printf("%d %d\n", max, min);
    return 0;
}
