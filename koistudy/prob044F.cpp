#include <stdio.h>

void star(int n){
    if (n){
        printf("*");
        star(n-1);
    }else{
        printf("\n");
    }
}

void print(int n){
    if (n == 1){
        star(1);
        star(1);
    }else{
        print(n-1);
        star(n);
        print(n-1);
        star(n);
        print(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
