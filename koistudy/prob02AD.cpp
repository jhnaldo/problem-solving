#include <stdio.h>

int main(){
    int n, rev, count;
    scanf("%d", &n);
    rev = count = 0;
    while (n){
        rev *= 10;
        rev += n % 10;
        count += n % 10;
        n /= 10;
    }
    printf("%d\n%d\n", rev, count);
    return 0;
}
