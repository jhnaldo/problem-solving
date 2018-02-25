#include <stdio.h>

int main(){
    int min = 24;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        if (min > k) min = k;
    }
    printf("%d\n", min);
    return 0;
}
