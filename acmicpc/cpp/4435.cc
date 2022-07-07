#include <stdio.h>

int main(){
    int t, k = 1;

    scanf("%d", &t);
    while(t--){
        int score_gand[6] = {1,2,3,3,4,10};
        int score_evil[7] = {1,2,2,2,3,5,10};
        int sum_gand, sum_evil;
        int i, num;

        sum_gand = 0;
        for (i = 0; i < 6; i++){
            scanf("%d", &num);
            sum_gand += score_gand[i]*num;
        }

        sum_evil = 0;
        for (i = 0; i < 7; i++){
            scanf("%d", &num);
            sum_evil += score_evil[i]*num;
        }

        printf ("Battle %d: ", k++);
        if (sum_gand > sum_evil){
            printf ("Good triumphs over Evil\n");
        }else if (sum_evil > sum_gand){
            printf ("Evil eradicates all trace of Good\n");
        }else{
            printf ("No victor on this battle field\n");
        }
    }
    return 0;
}
