#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);
    printf("%d\n", (n%4==0) && (n%100 || n%400==0));
    return 0;
}
