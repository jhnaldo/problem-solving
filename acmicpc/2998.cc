#include <stdio.h>
#include <string.h>

int toOct(char *str){
    int i, sum = 0;
    for (i = 0; i < 3; i++){
        sum *= 2;
        sum += str[i]-'0';
    }
    return sum;
}

int main(){
    int size, i;
    char str[201], *_str;
    scanf("%s", str+2);
    size = strlen(str+2);
    if (size % 3 == 1){
        str[0] = str[1] = '0';
        _str = str;
    }else if (size %3 == 2){
        str[1] = '0';
        _str = str+1;
    }else{
        _str = str+2;
    }

    for (i = 0; _str[i]; i += 3)
        printf("%d", toOct(_str+i));
    printf("\n");
    return 0;
}
