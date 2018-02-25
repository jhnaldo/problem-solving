#include <stdio.h>

int main(){
    int n, x, y;
    x = y = 0;
    scanf("%d", &n);
    while (n--){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b) x += a+b;
        else if (a < b) y += a+b;
        else { x += a; y += b; }
    }
    printf("%d %d\n", x, y);
    return 0;
}
