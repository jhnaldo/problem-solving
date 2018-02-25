#include <stdio.h>

int main(){
    int a, b, c;
    char left, right;
    scanf("%d %d %d", &a, &b, &c);
    if (a+b == c) { left = '+'; right = '='; }
    else if (a-b == c) { left = '-'; right = '='; }
    else if (a*b == c) { left = '*'; right = '='; }
    else if (a == b+c) { left = '='; right = '+'; }
    else if (a == b-c) { left = '='; right = '-'; }
    else if (a == b*c) { left = '='; right = '*'; }
    else if (a/b == c) { left = '/'; right = '='; }
    else if (a == b/c) { left = '='; right = '/'; }
    printf("%d%c%d%c%d\n", a, left, b, right, c);
    return 0;
}
