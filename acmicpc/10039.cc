#include <stdio.h>

int main(){
    int sum, n, i;
    sum = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &n);
        sum += (n<40?40:n);
    }
    printf("%d\n", sum/5);
}
