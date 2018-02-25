#include <stdio.h>

char int2hex(int x){
    if (x < 10) return x+'0';
    return x-10+'A';
}

int main(){
    char str[51];
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        printf("%c%c", int2hex(str[i]/16), int2hex(str[i]%16));
    }
    printf("\n");
}
