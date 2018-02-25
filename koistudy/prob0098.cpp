#include <stdio.h>

int count(int n){
    if (n == 1) return 1;
    return 1 + count((n%2?n*3+1:n/2));
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", count(n));
    return 0;
}
