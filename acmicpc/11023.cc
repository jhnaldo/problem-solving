#include <stdio.h>

int main(){
    int n, sum = 0;
    while(scanf("%d", &n) != EOF) sum += n;
    printf("%d\n", sum);
    return 0;
}
