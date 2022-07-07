#include <stdio.h>

void iter(const char str[], int k){
    while(k--) printf("%s", str);
}

void newline(){
    printf("\n");
}

int main(){
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        iter(" ", n-i-1);iter("*", 1);iter(" *", i);newline();
    }
    return 0;
}
