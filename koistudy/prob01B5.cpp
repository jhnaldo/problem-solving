#include <stdio.h>

int main(){
    int n;
    int sum = 0, min;
    int i;
    scanf("%d", &n);
    scanf("%d", &min);
    sum = min;
    for (i = 0; i < n-1; i++){
        int value;
        scanf("%d", &value);
        sum += value;
        if (value < min) min = value;
    }
    printf("%d\n", sum-min);
    return 0;
}
