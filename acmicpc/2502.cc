#include <stdio.h>

int main(){
    int n, k;
    int a[3] = {0,}, b[3] = {0,};
    int i;

    scanf("%d %d", &n, &k);
    a[1] = b[2] = 1;
    for (i = 0; i < n-2; i++){
        a[0] = a[1];
        a[1] = a[2];
        a[2] = a[0] + a[1];
        b[0] = b[1];
        b[1] = b[2];
        b[2] = b[0] + b[1];
    }

    for (i = 1; (k-a[2]*i)%b[2]; i++);
    printf ("%d\n%d\n", i, (k-a[2]*i)/b[2]);
    return 0;
}
