#include <stdio.h>

int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    while (n--){
        int k;
        scanf("%d", &k);
        if (k < x) printf("%d ", k);
    }
    printf("\n");
    return 0;
}
