#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, i;
        long long int p_4, p_3, p_2, p_1, cur;
        scanf("%d", &n);
        p_4 = p_3 = p_2 = 1;
        p_1 = cur = 2;
        if (n <= 5){
            printf("%d\n", (n-1)/3+1);
            continue;
        }
        for (i = 5; i < n; i++){
            long long int tmp = cur + p_4;
            p_4 = p_3;
            p_3 = p_2;
            p_2 = p_1;
            p_1 = cur;
            cur = tmp;
        }
        printf("%lld\n", cur);
    }
    return 0;
}
