#include <stdio.h>

int main(){
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++){
        int num;
        scanf("%d", &num);
        sum += num * num;
    }
    printf("%d\n", sum % 10);
    return 0;
}
