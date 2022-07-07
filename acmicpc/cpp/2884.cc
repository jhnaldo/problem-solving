#include <stdio.h>

int main(){
    int h, m;

    scanf("%d %d", &h, &m);

    if (m >= 45){
       m -= 45;
    }else{
        m += 15;
        h = (h?h-1:23);
    }
    printf("%d %d\n", h, m);
    return 0;
}
