#include <stdio.h>

int main(){
    int len[13], i, j, k = 1;
    char str[531442] = {0,};
    str[0] = '-';
    len[0] = 1;
    for (i = 1; i <= 12; i++){
        for (j = k; j < 2*k; j++) str[j] = ' ';
        for (j = 2*k; j < 3*k; j++) str[j] = str[j-2*k];
        k *= 3;
        len[i] = k;
    }
    while (true){
        int n;
        char tmp;
        if (scanf("%d", &n)==EOF) break;
        tmp = str[len[n]];
        str[len[n]] = '\0';
        printf("%s\n", str);
        str[len[n]] = tmp;
    }
}
