#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int max[2] = {};
    int i;

    for (i = 0; i < 7; i++){
        int value;
        scanf("%d", &value);
        max[value%2] = MAX(max[value%2], value);
    }

    printf("%d\n", max[0] + max[1]);
    return 0;
}
