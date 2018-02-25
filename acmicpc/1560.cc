#include <stdio.h>
#include <string.h>

int main(){
    char str[71];
    int size, i;

    scanf("%s", str);
    size = strlen(str);
    if (size == 1 && str[0] == '1'){
        printf("1\n");
        return 0;
    }
    for (i = size-1; str[i] == '0'; i--) str[i] = '9';
    str[i]--;

    for (i = size-1; i >= 0; i--) str[i] = (str[i]-'0') * 2;
    for (i = size-1; i > 0; i--){
        if (str[i] > 9){
            str[i] %= 10;
            str[i-1]++;
        }
        str[i] += '0';
    }
    str[i] += '0';
    if (str[0] > '9'){
        printf("1");
        str[0] -= 10;
    }
    printf("%s\n", str);
    return 0;
}
