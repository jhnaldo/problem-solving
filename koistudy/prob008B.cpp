#include <stdio.h>

void upper(char &ch){
    if ('a' <= ch && ch <= 'z') ch += 'A' - 'a';
}

void swap(char &x, char &y){
    char tmp = x;
    x = y;
    y = tmp;
}

bool alpha(char ch){
    return ch != '.' && ch != '!';
}

int main(){
    char str[51];
    while (scanf("%s", str) != EOF){
        int i, k;
        for (i = 0; str[i] && alpha(str[i]); i++);
        k = i;
        for (i--; i >= k-i-1; i--){
            swap(str[i], str[k-i-1]);
            upper(str[i]);
            upper(str[k-i-1]);
        }
        printf("%s ", str);
    }
    printf("\n");
    return 0;
}
