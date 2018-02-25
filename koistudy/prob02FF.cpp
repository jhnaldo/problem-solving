#include <stdio.h>

int main(){
    int n;
    int rank[101] = {};
    int* score;
    int cur, i;

    scanf("%d", &n);
    score = new int[n];
    for (i = 0; i < n; i++){
        scanf("%d", &score[i]);
        rank[score[i]]++;
    }

    cur = 1;
    for (i = 100; i >= 0; i--){
        if (rank[i]){
            int tmp = cur;
            cur += rank[i];
            rank[i] = tmp;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d\n", rank[score[i]]);

    delete[] score;
    return 0;
}
