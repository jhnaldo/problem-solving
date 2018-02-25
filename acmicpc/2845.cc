#include <stdio.h>

int main(){
    int n, p, i;
    scanf("%d %d", &n, &p);
    for (i = 0; i < 5; i++){
        int num;
        scanf("%d", &num);
        printf("%d ", num-n*p);
    }
    printf("\n");
    return 0;
}
