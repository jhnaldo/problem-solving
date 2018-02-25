#include <stdio.h>

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        int n, k = 1;
        scanf("%d", &n);
        while(k+k*k <= n) k++;
        printf("%d\n", k-1);
    }
    return 0;
}
