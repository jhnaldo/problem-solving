#include <stdio.h>

int main(){
    int n;
start:
    scanf("%d", &n);
    if (n == 0) goto end;
    printf("%d\n", n);
    goto start;
end:
    return 0;
}
