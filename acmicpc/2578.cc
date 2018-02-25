#include <stdio.h>

int main(){
    int arr[5][5], call[26], pos[26];
    int rsum[5] = {0,}, csum[5] = {0,}, dsum[2] = {0,};
    int i, j, bingo = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
            pos[arr[i][j]] = i*5+j;
        }
    }
    for (i = 1; i <= 25; i++){
        scanf("%d", &call[i]);
    }
    for (i = 1; i <= 25; i++){
        int cur, x, y;
        cur = pos[call[i]];
        x = cur/5;
        y = cur%5;
        if (++rsum[x] == 5) bingo++;
        if (++csum[y] == 5) bingo++;
        if (x == y && ++dsum[0] == 5) bingo++;
        if (x+y == 4 && ++dsum[1] == 5) bingo++;
        if (bingo >= 3) break;
    }

    printf("%d\n", i);

    return 0;
}
