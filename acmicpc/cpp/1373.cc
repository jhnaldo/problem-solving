#include <stdio.h>

#define val(x) (str[x]=='0'?0:1)

int strlen(char str[]){
    int i;
    for (i = 0; str[i]; i++);
    return i;
}

int main(){
    char str[1000001];
    int size;
    int i;

    scanf("%s", str);
    size = strlen(str);

    i = size % 3 - 1;
    if (i == 0) printf("%d", val(0));
    if (i == 1) printf("%d", val(0)*2 + val(1));
    for (i+=3; i < size; i+=3){
        printf("%d", val(i-2)*4 + val(i-1)*2 + val(i));
    }
    printf("\n");
    return 0;
}
