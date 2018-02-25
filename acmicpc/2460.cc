#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int sum, max, out, in;
    int i;

    sum = max = 0;
    for (i = 0; i < 10; i++){
        scanf("%d %d", &out, &in);
        sum += in - out;
        max = MAX(sum, max);
    }
    printf("%d\n", max);
    return 0;
}
