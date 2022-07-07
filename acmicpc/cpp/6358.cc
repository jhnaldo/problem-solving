#include <stdio.h>

#define BASE 60

int main(){
    double prob[BASE*2+1] = {0,};
    double base[BASE*2+1] = {0,};
    int i, j, k;
    base[BASE-3] = prob[BASE-3] = 1/16.0;
    base[BASE-1] = prob[BASE-1] = 2/16.0;
    base[BASE]   = prob[BASE]   = 6/16.0;
    base[BASE+1] = prob[BASE+1] = 4/16.0;
    base[BASE+2] = prob[BASE+2] = 2/16.0;
    base[BASE+3] = prob[BASE+3] = 1/16.0;

    printf("Round   A wins    B wins    Tie\n");
    printf("%5d   %07.04lf%%  %07.04lf%%  %07.04lf%%\n", 1, 7/16.0*100, 3/16.0*100, 6/16.0*100);
    for (int k = 2; k <= 20; k++){
        double win, lose, tie;
        double before[BASE*2+1] = {0,};

        for (i = -3*(k-1); i <= 3*(k-1); i++){
            before[BASE+i] = prob[BASE+i];
            prob[BASE+i] = 0;
        }
        for (i = -3*(k-1); i <= 3*(k-1); i++){
            for (j = -3; j <= 3; j++)
                prob[BASE+i+j] += before[BASE+i]*base[BASE+j];
        }

        win = lose = tie = 0;
        for (i = -3*k; i <= 3*k; i++){
            if (i < 0) lose += prob[BASE+i];
            else if (i > 0) win += prob[BASE+i];
            else tie += prob[BASE+i];
        }
        printf("%5d   %-7.04lf%%  %-7.04lf%%  %-7.04lf%%\n", k, win*100, lose*100, tie*100);
    }
    return 0;
}
