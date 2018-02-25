#include <stdio.h>

int main(){
    int sum = -1, i;
    for (i = 0; i < 7; i++){
        int value;
        scanf("%d", &value);
        if (value%2){
            if (sum == -1) sum = 0;
            sum += value;
        }
    }
    printf("%d\n", sum);
    return 0;
}
