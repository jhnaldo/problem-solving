#include <stdio.h>

int main(){
    int n;
    int sum = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        sum += k;
    }
    printf("%d\n%.2lf\n", sum, (double)sum/n);
    return 0;
}
