#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (true){
        int k;
        scanf("%d", &k);
        if (!k) break;
        printf("%d is %sa multiple of %d.\n", k, (k%n?"NOT ":""), n);
    }
    return 0;
}
