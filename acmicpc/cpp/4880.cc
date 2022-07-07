#include <stdio.h>

int main(){
    while (true){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (!a && !b && !c) break;
        if (b-a == c-b) printf("AP %d\n", c-b+c);
        else printf("GP %d\n", c/b*c);
    }
    return 0;
}
