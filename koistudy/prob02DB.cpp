#include <stdio.h>
#include <math.h>

int count(int a, int b){
    return floor(sqrt(b)) - ceil(sqrt(a)) + 1;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", b-a+1 - count(a, b));
    return 0;
}
