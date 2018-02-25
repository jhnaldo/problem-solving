#include <stdio.h>

int main(){
    int count = 1, i;
    char str[101];
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        if (str[i] == ',') count++;
    }
    printf("%d\n", count);
    return 0;
}
