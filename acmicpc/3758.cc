#include <stdio.h>

int main(){
    int test, n, k, t, m, id, num, s, res;
    int i;

    scanf("%d", &test);
    for (; test > 0; test--){
        int score[100][100] = {0,};
        int sum[100] = {0,}, count[100] = {0,}, last[100] = {0,};
        scanf("%d %d %d %d", &n, &k, &t, &m);
        t--;
        for (i = 0; i < m; i++){
            scanf("%d %d %d", &id, &num, &s);
            id--;
            num--;
            count[id]++;
            last[id] = i;
            if (score[id][num] < s){
                sum[id] += s - score[id][num];
                score[id][num] = s;
            }
        }

        res = 1;
        for (i = 0; i < n; i++){
            if (sum[i] > sum[t]){
                res++;
            }else if (sum[i] == sum[t]){
                if (count[i] < count[t]){
                    res++;
                }else if (count[i] == count[t]){
                    if (last[i] < last[t]){
                        res++;
                    }
                }
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
