#include <stdio.h>

int main(){
    int n, k = 1;
    scanf("%d", &n);
    while(n){
        int sum = 0;
        while(n){
            n /= 5;
            sum += n;
        }
        printf("Case #%d: %d\n", k++, sum);
        scanf("%d", &n);
    }
    return 0;
}
