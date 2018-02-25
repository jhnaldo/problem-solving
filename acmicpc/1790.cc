#include <stdio.h>

int main(){
    int n, k;
    int cur, i, next;

    scanf("%d %d", &n, &k);
    int tmp = k;
    for (i = 1, cur = 0, next = 9; next*i < k; k-=next*i, next*=10, cur*=10, cur+=9, i++);
    cur += (k-1)/i+1;
    if (n < cur){
        printf("-1\n");
    }else{
        k = i-(k-1)%i-1;
        for (i = 0; i < k; i++) cur/=10;
        printf("%d\n", cur%10);
    }
    k = tmp;
    return 0;
}
