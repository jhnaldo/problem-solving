#include <stdio.h>

int main(){
    int r, w, l, i = 1;
    scanf("%d", &r);
    while (r){
        scanf("%d %d", &w, &l);
        printf("Pizza %d %s on the table.\n", i++, (r*r*4 >= w*w+l*l?"fits":"does not fit"));
        scanf("%d", &r);
    }
    return 0;
}
