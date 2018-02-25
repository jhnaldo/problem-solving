#include <stdio.h>

int main(){
    int n, i, sum;
    scanf("%d", &n);
    for (sum = 1, i = 1; sum < n; i++, sum += i);
    printf("%d\n", sum);
    return 0;
}
