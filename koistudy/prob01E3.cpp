#include <stdio.h>

int min(int a, int b){
    return (a < b? a: b);
}

int main(){
    int n;
    int i, j;
    int max = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        int count = 0;
        for (j = i; j <= n; j++){
            count += min(n + i - j, j);
        }
        if (max < count) max = count;
    }
    printf("%d\n", n*(n+1)/2 - max);
    return 0;
}
