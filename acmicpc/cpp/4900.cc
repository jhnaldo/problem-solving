#include <stdio.h>
#include <string.h>

char code[10][4] = {
    "063",
    "010",
    "093",
    "079",
    "106",
    "103",
    "119",
    "011",
    "127",
    "107"};

int code2int(char str[]){
    int value = 0, i, j, k;
    for (i = 0; str[i]; i+=3){
        for (k = 0; k < 10; k++){
            for (j = i; j < i+3; j++){
                if (str[j] != code[k][j-i]) break;
            }
            if (j == i+3){
                value *= 10;
                value += k;
                break;
            }
        }
    }
    return value;
}

void print_add_code(char left[], char right[], char result[]){
    int value = code2int(left) + code2int(right), i;
    printf("%s+%s=", left, right);
    for (i = 1; value/i >= 10; i *= 10);
    for (; i; i /= 10){
        printf("%s", code[value/i]);
        value %= i;
    }
    printf("\n");
}

int main(){
    while (true){
        char a[57], *b, result[31];
        int i;
        scanf("%s", a);
        if (a[0] == 'B') break;
        for (i = 0; a[i] != '='; i+=3){
            if (a[i] == '+'){
                a[i] = '\0';
                b = a+(++i);
            }
        }
        a[i] = '\0';
        print_add_code(a, b, result);
    }
    return 0;
}
