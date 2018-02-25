#include <stdio.h>

int main(){
    int d, h, m, result;
    scanf("%d %d %d", &d, &h, &m);
    result = (d-11)*1440 + (h-11)*60 + (m-11);
    printf("%d\n", (result<0?-1:result));
    return 0;
}
