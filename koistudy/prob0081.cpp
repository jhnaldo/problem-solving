#include <stdio.h>

int rev(int n){
    int m = 0;
    while (n){
        m *= 10;
        m += n%10;
        n /= 10;
    }
    return m;
}

bool palindrom(int n){
    int arr[20];
    int size = 0, i;
    while (n){
        arr[size++] = n%10;
        n /= 10;
    }
    for (i = 0; i < size/2; i++){
        if (arr[i] != arr[size-i-1]) return false;
    }
    return true;
}

int main(){
    int n, count = 0;
    scanf("%d", &n);
    while (!palindrom(n)) {
        n += rev(n);
        count++;
    }
    printf("%d %d\n", count, n);
    return 0;
}
