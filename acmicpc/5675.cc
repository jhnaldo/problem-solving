#include <stdio.h>

int main(){
    while(true){
        int n;
        if (scanf("%d", &n) == EOF) break;
        printf("%c\n", (n%6?'N':'Y'));
    }
    return 0;
}
