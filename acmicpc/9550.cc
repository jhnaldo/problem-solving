#include <stdio.h>

int main(){
    int t, n, k;
    int num, sum, i;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &k);
        sum = 0;
        while(n--){
            scanf("%d", &num);
            sum += num/k;
        }
        printf("%d\n", sum);
    }
    return 0;
}
