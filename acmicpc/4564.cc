#include <stdio.h>

int convert(int n){
    int result = 1;
    while (n){
        result *= n%10;
        n /= 10;
    }
    return result;
}

int main(){
    while (true){
        int n;
        scanf("%d", &n);
        if (!n) break;
        while (true){
            printf("%d ", n);
            if (!(n/10)) break;
            n = convert(n);
        }
        printf("\n");
    }
    return 0;
}
