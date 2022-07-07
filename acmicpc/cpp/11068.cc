#include <stdio.h>

bool check (int n, int b){
    int arr[30];
    int size = 0;
    int i;
    while (n){
        arr[size++] = n%b;
        n /= b;
    }
    for (i = 0; i < size/2; i++){
        if (arr[i] != arr[size-i-1]) return false;
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, b;
        scanf("%d", &n);
        for (b = 2; b <= 64; b++){
            if (check(n, b)){
                printf("1\n");
                break;
            }
        }
        if (b > 64) printf("0\n");
    }
    return 0;
}
