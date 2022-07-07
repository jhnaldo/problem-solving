#include <stdio.h>

bool is_shom(int n){
    while (n){
        if (n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int n, i, max;
    scanf("%d", &n);
    for (i = 4; i <= n; i++)
        if (is_shom(i)) max = i;
    printf("%d\n", max);
    return 0;
}
