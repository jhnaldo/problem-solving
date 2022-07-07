#include <stdio.h>

int main(){
    char ch[6] = "DCBAE";
    int a, b, c, d, i;

    for (i = 0; i < 3; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        printf("%c\n", ch[a+b+c+d]);
    }
    return 0;
}
