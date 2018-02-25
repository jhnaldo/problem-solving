#include <stdio.h>
#include <string.h>

int to(char ch){
    if (ch >= 'a') return ch - 'a' + 5;
    else return ch - 'A';
}

int main(){
    char str[11];
    int len;
    int i;
    long long cur = 0;
    scanf("%s", str);
    len = strlen(str);
    for (i = len-1; i >= 0; i--){
        cur *= 10;
        cur += to(str[i]);
    }
    printf("%lld\n", cur);
}
