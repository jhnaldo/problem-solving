#include <stdio.h>

int main(){
    int num, max, pos;
    int i;

    scanf("%d", &max);
    pos = 1;

    for (i = 2; i <= 9; i++){
        scanf("%d", &num);
        if (max < num){
            max = num;
            pos = i;
        }
    }
    printf("%d\n%d\n", max, pos);

    return 0;
}
