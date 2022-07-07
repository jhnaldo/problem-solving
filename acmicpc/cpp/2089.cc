#include <stdio.h>

#define ABS(x) (x<0?-x:x)

int main(){
    int n, size;
    int arr[1000];
    scanf("%d", &n);
    for (size = 0; n; size++){
        arr[size] = ABS(n)%2;
        n -= arr[size];
        n /= (-2);
    }

    if (size == 0) printf("0");
    for (size--; size >= 0; size--)
        printf("%d", arr[size]);
    printf("\n");
    return 0;
}
