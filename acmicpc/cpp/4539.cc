#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d", &n);
        for (k = 10; n > k; k *= 10)
            n = (n/k+((n%k/(k/10))>=5?1:0))*k;
        printf("%d\n", n);
    }
    return 0;
}
