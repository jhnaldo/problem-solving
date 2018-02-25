#include <stdio.h>

int main(){
    int n;
    int f_2, f_1, f;
    int i;

    scanf("%d", &n);
    f_1 = 0;
    f = 1;
    for (i = 1; i < n; i++){
        f_2 = f_1;
        f_1 = f;
        f = f_2 + f_1;
    }
    printf("%d\n", f);
    return 0;
}
