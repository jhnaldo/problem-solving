#include <stdio.h>

int main(){
    char str[6];
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++)
        printf("%c", str[i]-'a'+'A');
    printf("\n");
    return 0;
}
