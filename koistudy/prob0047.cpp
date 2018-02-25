#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
start:
    if (!(t--)) goto end;
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    goto start;
end:
    return 0;
}
