#include <stdio.h>

int main(){
    int sum = 1;
    int n, num;

    scanf("%d", &n);
    for (; n > 0; n--){
        scanf("%d", &num);
        sum += num-1;
    }
    printf("%d\n", sum);
}
