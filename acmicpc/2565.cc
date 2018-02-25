#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (a>b?a:b)
int from[100], to[100];

int comp(const void *a, const void *b){
    return (from[*(int*)a]-from[*(int*)b]);
}

int main(){
    int n;
    int order[100], max_len[100] = {0,};
    int i, j, max = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &from[i], &to[i]);
        order[i] = i;
    }
    qsort(order, n, sizeof(int), comp);

    for (i = 0; i < n; i++){
        int cur = to[order[i]];
        max_len[i] = 1;
        for (j = 0; j < i; j++){
            int before = to[order[j]];
            if (before < cur){
                max_len[i] = MAX(max_len[i], max_len[j]+1);
            }
        }
        max = MAX(max_len[i], max);
    }
    printf ("%d\n", n-max);
    return 0;
}
