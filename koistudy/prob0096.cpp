#include <stdio.h>

void star(int n){
    if (n == 1) {
        printf("*\n");
    }else{
        printf("*");
        star(n-1);
    }
}

void print(int n, bool upper){
    if (n == 1) {
        printf("*\n");
    }else{
        if (upper){
            print(n-1, upper);
            star(n);
        }else{
            star(n);
            print(n-1, upper);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    print(n, true);
    if (n > 1) print(n-1, false);
    return 0;
}
