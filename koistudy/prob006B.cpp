#include <stdio.h>

int main(){
    long long a;
    scanf("%lld", &a);
    printf("%s\n", (a%2?"odd":"even"));
    return 0;
}
