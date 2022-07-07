#include <stdio.h>
#include <math.h>

int main(){
    int n, m, i;
    int min, sum;
    scanf("%d %d", &n, &m);
    i = sqrt(n);
    if (i*i < n) i++;

    min = i*i;
    sum = 0;
    while (i*i <= m){
        sum += i*i;
        i++;
    }

    if (sum){
        printf("%d\n%d\n", sum, min);
    }else{
        printf("-1\n");
    }
    return 0;
}
