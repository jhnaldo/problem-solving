#include <stdio.h>

int main(){
    int n, sum = 0;
    int i;
    scanf("%d", &n);
    for (i = (n-1)/2; i >= (n-1)/3+1; i--)
        sum += i - ((n-i+1)/2) + 1;
    printf("%d\n", sum);
    return 0;
}
