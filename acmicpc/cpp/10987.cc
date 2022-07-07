#include <stdio.h>

int main(){
    char str[101];
    int i, count = 0;
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        if (str[i] == 'a'
            || str[i] == 'e'
            || str[i] == 'i'
            || str[i] == 'o'
            || str[i] == 'u') count++;
    }
    printf("%d\n", count);
    return 0;
}

