#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    m = n/30 + (n%30>=15);
    if (m) printf("%d\n", m);
    else printf("Too Soon!\n");
    return 0;
}
