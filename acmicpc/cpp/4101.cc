#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    while (n && m){
        printf("%s\n", (n>m?"Yes":"No"));
        scanf("%d %d", &n, &m);
    }
    return 0;
}
