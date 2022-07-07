#include <stdio.h>

int main(){
    int num, max;
    int x, y;
    int i, j;

    max = 0;
    for (i = 1; i <= 9; i++){
        for (j = 1; j <= 9; j++){
            scanf("%d", &num);
            if (max < num){
                max = num;
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n%d %d\n", max, x, y);
    return 0;
}
