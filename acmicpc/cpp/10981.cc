#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 100000

char univ[MAX_NUM][31], name[MAX_NUM][31], selected[100][31];
int score[MAX_NUM], penalty[MAX_NUM];

int compare (const void *left, const void *right){
    int lidx = *(int*)left;
    int ridx = *(int*)right;
    int diff = score[ridx] - score[lidx];
    if (diff) return diff;
    return penalty[lidx] - penalty[ridx];
}

int main(){
    int n, k, i, j, l;
    int order[MAX_NUM];
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++){
        scanf("%s %s %d %d", univ[i], name[i], &score[i], &penalty[i]);
        order[i] = i;
    }

    qsort (order, n, sizeof(int), compare);

    for (i = 0, l = 0; l < k; i++){
        for (j = 0; j < l; j++){
            if (strcmp (univ[order[i]], selected[j]) == 0){
                break;
            }
        }
        if (j == l){
            strcpy(selected[l++], univ[order[i]]);
            printf("%s\n", name[order[i]]);
        }
    }
    return 0;
}
