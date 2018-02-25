#include <stdio.h>

int main(){
    int i;
    char str[101];

    scanf("%s", str);
    for (i = 0; str[i]; i++){
        printf("%c", str[i]);
        if (i % 10 == 9) printf("\n");
    }
}
