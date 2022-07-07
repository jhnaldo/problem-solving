#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, m, i, j;
        int count[100] = {0,}, sum = 0;
        scanf("%d %d", &n, &m);
        for (i = 0; i < n; i++){
            for (j = 0; j < m; j++){
                int fill;
                scanf("%d", &fill);
                if (fill){
                    count[j]++;
                    sum += n-i;
                }
            }
        }
        for (j = 0; j < m; j++){
            for (i = 1; i <= count[j]; i++){
                sum -= i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
