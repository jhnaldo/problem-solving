#include <stdio.h>

int main(){
    int n, k, i;

    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++){
        if (n%i == 0) k--;
        if (k == 0) break;
    }
    printf("%d\n", (i>n?0:i));
    return 0;
}
