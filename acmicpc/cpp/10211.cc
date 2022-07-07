#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, i, max, cur_max;

        scanf("%d", &n);
        scanf("%d", &max);
        cur_max = max;
        for (i = 1; i < n; i++){
            int k;
            scanf("%d", &k);
            cur_max = k+(cur_max>0?cur_max:0);
            if (max < cur_max){
                max = cur_max;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
