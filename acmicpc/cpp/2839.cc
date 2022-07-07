#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    for (i = 0; i <= 4; i++){
        if (n >= 0 && n%5 == 0){
            printf("%d\n", n/5+i);
            return 0;
        }
        n -= 3;
    }
    printf ("-1\n");

    return 0;
}
