#include <stdio.h>
#include <string.h>

char base64(int val){
    if (val < 26) return val+'A';
    if (val < 52) return val-26+'a';
    if (val < 62) return val-52+'0';
    return (val==62?'+':'/');
}

int main(){
    int i, size;
    char decode[101];
    char bits[1001] = {0,};
    scanf("%s", decode);
    size = strlen(decode);
    for (i = 0; decode[i]; i++){
        int value = decode[i];
        for (int j = 7; j >= 0; j--){
            bits[i*8+j] = (value % 2?1:0);
            value /= 2;
        }
    }
    for (i = 0; i < ((size-1)/3+1)*4; i++){
        if (i*3 >= size*4){
            printf("=");
        }else{
            int value = 0;
            for (int j = 0; j < 6; j++){
                value *= 2;
                value += bits[i*6+j];
            }
            printf("%c", base64(value));
        }
    }
    printf("\n");
    return 0;
}
