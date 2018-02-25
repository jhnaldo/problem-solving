#include <stdio.h>

int main(){
    int n, k, sum;
    int i;
    scanf("%d %d", &n, &k);
    for (sum = 0, i = 1; i <= n; i++){
        if (i%k == 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
