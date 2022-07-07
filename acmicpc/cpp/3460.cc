#include <stdio.h>

int main(){
    int t, n;
    int i;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d", &n);
        for (i = 0; n; i++, n/=2){
            if (n % 2) printf ("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
