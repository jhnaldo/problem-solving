#include <stdio.h>

int main(){
    int n;
    int min, max;
    min = 1000000;
    max = -1000000;
    scanf("%d", &n);
    while (n--){
        int k;
        scanf("%d", &k);
        if (k < min) min = k;
        if (k > max) max = k;
    }
    printf("%d %d\n", min, max);
    return 0;
}
