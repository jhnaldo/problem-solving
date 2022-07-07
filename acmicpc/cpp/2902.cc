#include <stdio.h>

int main(){
    int i;
    char str[101];
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
