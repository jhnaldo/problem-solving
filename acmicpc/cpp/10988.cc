#include <stdio.h>
#include <string.h>

int palindrom(char str[]){
    int i, j;
    int len = strlen(str);
    for (i = 0, j = len-1; i < j; i++, j--){
        if (str[i] != str[j]) return 0;
    }
    return 1;
}

int main(){
    char str[101];
    scanf("%s", str);
    printf("%d\n", palindrom(str));
    return 0;
}
