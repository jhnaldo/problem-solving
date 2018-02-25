#include <stdio.h>

int main(){
    int n, k;
    int gold[1000], silver[1000], bronze[1000];
    int i, res;

    scanf("%d %d", &n, &k);
    k--;
    for (i = 0; i < n; i++){
        int id;
        scanf("%d", &id);
        id--;
        scanf("%d %d %d", &gold[id], &silver[id], &bronze[id]);
    }

    res = 1;
    for (i = 0; i < n; i++){
        if (gold[i] > gold[k]){
            res++;
        }else if(gold[i] == gold[k]){
            if (silver[i] > silver[k]){
                res++;
            }else if (silver[i] == silver[k]){
                if (bronze[i] > bronze[k])
                    res++;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
