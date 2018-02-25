#include <stdio.h>

void print(int n, int k){
    if (n >= k) print(n/k, k);
    n %= k;
    printf("%c", (n < 10?n+'0':n-10+'A'));
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    print(n, k);
    printf("\n");
    return 0;
}
