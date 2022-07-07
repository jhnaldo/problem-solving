#include <stdio.h>

int main(){
    while (true){
        int n, m;
        scanf("%d %d", &n, &m);
        if (!n && !m) break;
        printf("%d %d / %d\n", n/m, n%m, m);
    }
    return 0;
}
