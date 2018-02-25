#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int n, c;
        scanf("%d %d", &n, &c);
        printf("%d\n", (n-1)/c+1);
    }
    return 0;
}
