#include <stdio.h>

int main(){
    int n, k, i;
    int arr[20], size = 0;
    scanf("%d %d", &n, &k);
    while (n){
        arr[size++] = n%k;
        n /= k;
    }
    for (i = size-1; i>= 0; i--)
        printf("%c", arr[i]+(arr[i]<10?'0':'A'-10));
    printf("\n");
    return 0;
}
