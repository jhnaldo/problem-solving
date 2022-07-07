#include <stdio.h>

int main(){
    while (true){
        int n, m;
        scanf("%d %d", &n, &m);
        if (!n) break;
        printf("%d\n", 2*n-m);
    }
    return 0;
}
