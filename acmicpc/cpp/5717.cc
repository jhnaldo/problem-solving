#include <stdio.h>

int main(){
    int n, m;
    while(true){
        scanf("%d %d", &n, &m);
        if (!n && !m) break;
        printf("%d\n", n+m);
    }
    return 0;
}
