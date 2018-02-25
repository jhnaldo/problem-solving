#include <stdio.h>

int rev(int n){
    int result = 0;
    while (n){
        result *= 10;
        result += n%10;
        n /= 10;
    }
    return result;
}

bool palindrom(int n){
    int arr[10];
    int size = 0;
    int i;
    while (n) {
        arr[size++] = n%10;
        n /= 10;
    }
    for (i = 0; i < size/2; i++){
        if (arr[i] != arr[size-i-1])
            return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        printf("%s\n", (palindrom(n + rev(n))?"YES":"NO"));
    }
    return 0;
}
