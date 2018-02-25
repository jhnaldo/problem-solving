#include <stdio.h>

int toNum(char ch){
    if (ch >= '0' && ch <= '9') return ch-'0';
    else return ch-'A'+10;
}

int main(){
    char str[101];
    int B, res, i;

    scanf("%s %d", str, &B);
    for (i = 0, res = 0; str[i]; i++){
        res *= B;
        res += toNum(str[i]);
    }
    printf("%d\n", res);
    return 0;
}
