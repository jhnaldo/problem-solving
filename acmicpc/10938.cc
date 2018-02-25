#include <stdio.h>
#include <string.h>

char base32(int val){
    if (val < 26) return val+'A';
    else return val-26+'2';
}

int main(){
    int i, size;
    char decode[51];
    char bits[401] = {0,};
    scanf("%s", decode);
    size = strlen(decode);
    for (i = 0; decode[i]; i++){
        int value = decode[i];
        for (int j = 7; j >= 0; j--){
            bits[i*8+j] = (value % 2?1:0);
            value /= 2;
        }
    }
    for (i = 0; i < ((size-1)/5+1)*8; i++){
        int value = 0;
        for (int j = 0; j < 5; j++){
            value *= 2;
            value += bits[i*5+j];
        }
        if (i*5 >= size*8){
            printf("=");
        }else{
            printf("%c", base32(value));
        }
    }
    printf("\n");
    return 0;
}
