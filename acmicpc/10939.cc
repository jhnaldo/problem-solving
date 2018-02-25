#include <stdio.h>
#include <string.h>

int base32rev(char ch){
    if (ch == '=') return 0;
    if (ch >= 'A' && ch <= 'Z') return ch-'A';
    else return ch-'2'+26;
}

int main(){
    int i, size;
    char encode[81];
    char bits[401] = {0,};
    scanf("%s", encode);
    size = strlen(encode);
    for (i = 0; encode[i]; i++){
        int value = base32rev(encode[i]);
        for (int j = 4; j >= 0; j--){
            bits[i*5+j] = (value % 2?'1':'0');
            value /= 2;
        }
    }
    for (i = 0; i < size/8*5; i++){
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
