#include <stdio.h>
#include <string.h>

int hex2int(char ch){
    if (ch >= '0' && ch <= '9') return ch-'0';
    return (ch-'A')+10;
}

int main(){
    int i, length;
    char str[101];
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; i+=2){
        printf("%c", hex2int(str[i])*16+hex2int(str[i+1]));
    }
    printf("\n");
    return 0;
}
