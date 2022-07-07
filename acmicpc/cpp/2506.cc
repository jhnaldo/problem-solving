#include <stdio.h>

int main(){
    int n;
    int k, i, cur, sum;

    scanf("%d", &n);
    sum = cur = 0;
    for (i = 0; i < n; i++){
        scanf("%d", &k);
        if (k){
            sum += ++cur;
        }else{
            cur = 0;
        }
    }
    printf("%d\n", sum);
    return 0;
}
