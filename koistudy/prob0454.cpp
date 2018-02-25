#include <stdio.h>

int main(){
    char str[10001];
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        if (str[i] <= 'B') printf("A.B");
        else printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
