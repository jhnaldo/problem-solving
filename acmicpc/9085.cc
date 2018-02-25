#include <stdio.h>

int main(){
    int t;
    int n, sum, num;
    int i;

    scanf("%d\n", &t);
    for (; t > 0; t--){
        scanf("%d", &n);
        sum = 0;
        for (i = 0; i < n; i++){
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }
}
