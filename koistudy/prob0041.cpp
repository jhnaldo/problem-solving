#include <stdio.h>

#define print(a) printf("%s\n", (a%2?"odd":"even"));

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    print(a);
    print(b);
    print(c);
    return 0;
}
