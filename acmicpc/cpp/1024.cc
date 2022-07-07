#include <stdio.h>

int main(){
    int n, k, i, sum = 0, j;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++)
        sum += i;
    for (; sum <= n && i <= 100; sum += i++){
        if ((n-sum)%i == 0){
            int factor = (n-sum)/i;
            for (j = 0; j < i; j++){
                printf("%d ", j+factor);
            }
            printf("\n");
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
