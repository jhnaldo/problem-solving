#include <stdio.h>

void print(int n, int k){
    if (k > 0) {
        print(n, k-1);
        printf("%d*%d=%d\n", n, k, n*k);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    print(n, 9);
    return 0;
}
