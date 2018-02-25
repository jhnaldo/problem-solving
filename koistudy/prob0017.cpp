#include <stdio.h>

int main(){
    char str[21];
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++) printf("\'%c\'\n", str[i]);
    return 0;
}
