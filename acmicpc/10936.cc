#include <stdio.h>
#include <string.h>

int base64rev(char ch){
    if (ch >= 'A' && ch <= 'Z') return ch-'A';
    if (ch >= 'a' && ch <= 'z') return ch-'a'+26;
    if (ch >= '0' && ch <= '9') return ch-'0'+52;
    if (ch == '+') return 62;
    if (ch == '/') return 63;
    return 0;
}

int main(){
    int i, size;
    char encode[101];
    char bits[401] = {0,};
    scanf("%s", encode);
    size = strlen(encode);
    for (i = 0; encode[i]; i++){
        int value = base64rev(encode[i]);
        for (int j = 5; j >= 0; j--){
            bits[i*6+j] = (value % 2?'1':'0');
            value /= 2;
        }
    }
    for (i = 0; i < size/4*3; i++){
        int value = 0;
        for (int j = 0; j < 8; j++){
            value *= 2;
            value += bits[i*8+j]-'0';
        }
        if (value){
            printf("%c", value);
        }else{
            break;
        }
    }
    printf("\n");
    return 0;
}
