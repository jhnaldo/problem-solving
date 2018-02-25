#include <stdio.h>

int main(){
    int k, i;
    scanf("%d", &k);
    for (i = 0; i < k; i++) printf("1");
    for (i = 1; i < k; i++) printf("0");
    printf("\n");
    return 0;
}
