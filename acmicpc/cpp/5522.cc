#include <stdio.h>

int main(){
    int num, sum = 0;
    int i;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}
