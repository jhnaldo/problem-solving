#include <stdio.h>

int main(){
    int a, b, c;
    int i, j, k;
    int count[81] = {0,}, max;
    scanf("%d %d %d", &a, &b, &c);
    for (i = 1; i <= a; i++){
        for (j = 1; j <= b; j++){
            for (k = 1; k <= c; k++){
                count[i+j+k]++;
            }
        }
    }
    for (i = 4; i <= a+b+c; i++){
        if (count[max] < count[i])
            max = i;
    }
    printf("%d\n", max);
}
