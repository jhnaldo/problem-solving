#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%s\n", (n<0?"minus":"plus"));
    printf("%s\n", (n%2?"odd":"even"));
    return 0;
}
