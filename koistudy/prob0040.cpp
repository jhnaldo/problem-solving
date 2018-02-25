#include <stdio.h>

#define print_even(a) if(a%2 == 0) printf("%d\n", a);

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    print_even(a);
    print_even(b);
    print_even(c);
    return 0;
}
