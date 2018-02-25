#include <stdio.h>

int main(){
    int n, k, cur;

    scanf("%d", &n);
    cur = 1;
    for (k = 1; cur < n; k++)
        cur += k*6;
    printf("%d\n", k);

    return 0;
}
