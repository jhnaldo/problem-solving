#include <stdio.h>
#include <string.h>

int main(){
    char str[51];
    int i;
    fgets(str, 50, stdin);
    for (i = strlen(str)-1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
