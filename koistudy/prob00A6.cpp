#include <stdio.h>

int main(){
    int coin[4] = {500, 100, 50, 10};
    int i, n, count = 0;
    scanf("%d", &n);

    for (i = 0; i < 4; i++){
        count += n/coin[i];
        n %= coin[i];
    }
    printf("%d\n", count);
    return 0;
}
