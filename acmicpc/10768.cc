#include <stdio.h>

int main(){
    int m, d;
    scanf("%d\n%d", &m, &d);
    if (m == 2 && d == 18) printf("Special\n");
    else if (m < 2 || (m == 2 && d < 18)) printf("Before\n");
    else printf("After\n");
    return 0;
}
