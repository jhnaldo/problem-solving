#include <stdio.h>

void star(){
    printf("*");
}

void space_star(int k){
    while(k--) printf(" *");
}

void newline(){
    printf("\n");
}

int main(){
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        if (i%2) { space_star(n); }
        else { star();space_star(n-1); }
        newline();
    }
    return 0;
}
