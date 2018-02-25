#include <stdio.h>

int main(){
    char digit[6];
    int i, j;
    scanf("%s", digit);
    for (i = 0; i < 5; i++){
        printf("[%c", digit[i]);
        for (j = i; j < 4; j++) printf("0");
        printf("]\n");
    }
    return 0;
}
