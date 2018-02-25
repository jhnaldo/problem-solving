#include <stdio.h>

int main(){
    int k;
    for (k = 1; true; k++){
        int n;
        scanf("%d", &n);
        if (!n) break;
        printf("%d. %s %d\n", k, (n%2?"odd":"even"), (n%2?(3*n+1):3*n)/6);
    }
    return 0;
}
