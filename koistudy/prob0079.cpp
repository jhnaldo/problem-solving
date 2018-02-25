#include <stdio.h>

void star(int n){
    for (int i = 0; i < n; i++) printf("*");
}

int main(){
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        star(i);
        printf("\n");
    }
    for (i = n-1; i >= 1; i--){
        star(i);
        printf("\n");
    }
    return 0;
}
