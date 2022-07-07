#include <stdio.h>

void star(int k){
    while (k--) printf("*");
}

void space(int k){
    while (k--) printf(" ");
}

void newline(){
    printf("\n");
}

int main(){
    int n, i;
    scanf("%d", &n);
    space(n-1);star(1);newline();
    for (i = 1; i < n; i++){
        space(n-i-1);star(1);space(2*i-1);star(1);newline();
    }
    return 0;
}
