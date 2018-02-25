#include <stdio.h>

int main(){
    int n, k, i, count = 0;
    scanf("%d", &n);
    for (i = 0; i < 5; i++){
        scanf("%d", &k);
        if (k == n) count++;
    }
    printf("%d\n", count);
    return 0;
}
