#include <stdio.h>

void star(int n){
    if (n == 1) {
        printf("*\n");
    }else{
        printf("*");
        star(n-1);
    }
}

void print(int n){
    if (n == 1) {
        printf("*\n");
    }else{
        int i;
        print(n-1);
        star(n);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
