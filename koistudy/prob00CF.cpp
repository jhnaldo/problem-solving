#include <stdio.h>

int digit_sum(int n){
    if (n) return n % 10 + digit_sum(n / 10);
    return 0;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", digit_sum(n) * digit_sum(m));
    return 0;
}
