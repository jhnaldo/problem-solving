#include <stdio.h>

int main(){
    long long int n;
    int arr[50], size = 0, i;
    scanf("%lld", &n);
    while (n){
        arr[size++] = n%2;
        n /= 2;
    }
    for (i = size-1; i >= 0; i--)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}
