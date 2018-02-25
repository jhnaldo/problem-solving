#include <stdio.h>

int main(){
    int max = 0, idx = -1, i;
    for (i = 0; i < 9; i++){
        int value;
        scanf("%d", &value);
        if (max < value){
            max = value;
            idx = i;
        }
    }
    printf("%d\n%d\n", max, idx+1);
    return 0;
}
