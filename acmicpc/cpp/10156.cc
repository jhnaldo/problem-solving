#include <stdio.h>

int main(){
    int n, m, cur;

    scanf("%d %d %d", &n, &m, &cur);
    int res = n*m - cur;
    printf("%d\n", (res<0?0:res));
    return 0;
}
