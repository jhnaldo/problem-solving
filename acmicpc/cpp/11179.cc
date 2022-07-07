#include <stdio.h>

int main(){
    int n, m = 0;
    scanf("%d", &n);
    while (n){
        m *= 2;
        m += n%2;
        n /= 2;
    }
    printf("%d\n", m);
    return 0;
}
