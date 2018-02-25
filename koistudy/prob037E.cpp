#include <stdio.h>

int main(){
    int sum = 0, i;
    for (i = 0; i < 5; i++){
        int score;
        scanf("%d", &score);
        sum += (score < 40? 40: score);
    }
    printf("%d\n", sum/5);
    return 0;
}
