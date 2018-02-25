#include <stdio.h>

int main(){
    int n, k;
    int i;
    int max, min;
    int max_idx, min_idx;

    scanf("%d", &n);
    scanf("%d", &k);
    max = min = k;
    max_idx = min_idx = 1;
    for (i = 1; i < n; i++){
        scanf("%d", &k);
        if (max < k){
            max = k;
            max_idx = i+1;
        }
        if (min > k){
            min = k;
            min_idx = i+1;
        }
    }
    printf("%d : %d\n", max_idx, max);
    printf("%d : %d\n", min_idx, min);
    return 0;
}
