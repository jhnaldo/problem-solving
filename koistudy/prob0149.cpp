#include <stdio.h>

int main(){
    int i, j, max, x, y;
    for (max = 0, i = 1; i <= 9; i++){
        for (j = 1; j <= 9; j++){
            int value;
            scanf("%d", &value);
            if (max < value){
                max = value;
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n%d %d\n", max, x, y);
    return 0;
}
