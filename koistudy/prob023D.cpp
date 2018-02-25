#include <stdio.h>

int main(){
    int x[26] = {};
    int y[26] = {};
    int x_count[5] = {};
    int y_count[5] = {};
    int diag = 0, rdiag = 0;
    int bingo = 0;
    bool check = false;
    int idx;
    int i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            int value;
            scanf("%d", &value);
            x[value] = i;
            y[value] = j;
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            int value;
            scanf("%d", &value);
            if (++(x_count[x[value]]) == 5) bingo++;
            if (++(y_count[y[value]]) == 5) bingo++;
            if (x[value] == y[value] && ++diag == 5) bingo++;
            if (x[value] + y[value] == 4 && ++rdiag == 5) bingo++;
            if (!check && bingo >= 3){
                check = true;
                idx = i*5+j+1;
            }
        }
    }
    printf("%d\n", idx);
    return 0;
}
