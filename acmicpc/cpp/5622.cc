#include <stdio.h>

int a2num(char ch){
    if (ch <= 'O'){
        return (ch-'A')/3+3;
    }else if (ch <= 'S'){
        return 8;
    }else if (ch <= 'V'){
        return 9;
    }else{
        return 10;
    }
}

int main(){
    char str[16];
    int i, count = 0;
    scanf("%s", str);
    for (i = 0; str[i]; i++)
        count += a2num(str[i]);
    printf("%d\n", count);
    return 0;
}
