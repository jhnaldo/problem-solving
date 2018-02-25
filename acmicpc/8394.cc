#include <stdio.h>

int main(){
    int f_2, f_1, f, n;
    f_2 = f_1 = f = 1;

    scanf("%d", &n);
    for (int i = 2; i <= n; i++){
        f = (f_2 + f_1) % 10;
        f_2 = f_1;
        f_1 = f;
    }
    printf("%d\n", f);
    return 0;
}
