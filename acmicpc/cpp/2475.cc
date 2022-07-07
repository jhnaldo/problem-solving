#include <stdio.h>

int main(){
    int sum, num;
    int i;

    sum = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        sum += num*num;
    }
    printf("%d\n", sum%10);
    return 0;
}
