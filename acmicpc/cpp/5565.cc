#include <stdio.h>

int main(){
    int sum, price, i;

    scanf("%d", &sum);
    for (i = 0; i < 9; i++){
        scanf("%d", &price);
        sum -= price;
    }
    printf("%d\n", sum);
}
