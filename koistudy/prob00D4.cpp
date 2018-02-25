#include <stdio.h>

int main(){
    int c, h, o, n, cl;
    scanf("%d %d %d %d %d", &c, &h, &o, &n, &cl);
    printf("%s\n", ((c*4 + h + o*6 + n*5 + cl*7)%8?"Impossible":"Possible"));
    return 0;
}
