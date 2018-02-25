#include <stdio.h>

int main(){
    char str[101];
    int i, diff = 'a'-'A';

    scanf("%s", str);
    for (i = 0; str[i]; i++)
        printf("%c", str[i]+(str[i]>='a'?-diff:diff));
    printf("\n");
}
