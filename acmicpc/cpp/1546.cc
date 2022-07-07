#include <stdio.h>

int main(){
    int n, score, sum, max;
    int i;

    scanf("%d", &n);
    sum = max = 0;
    for (i = 0; i < n; i++){
        scanf("%d", &score);
        sum += score;
        if (max < score) max = score;
    }

    printf("%.2f\n", (float)sum/max*100/n);
}
