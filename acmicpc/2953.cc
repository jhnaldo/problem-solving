#include <stdio.h>

int main(){
    int max, winner;
    int i, j, score, sum;

    max = 0;
    for (i = 1; i <= 5; i++){
        sum = 0;
        for (j = 0; j < 4; j++){
            scanf("%d", &score);
            sum += score;
        }
        if (max < sum){
            max = sum;
            winner = i;
        }
    }
    printf("%d %d\n", winner, max);
    return 0;
}
