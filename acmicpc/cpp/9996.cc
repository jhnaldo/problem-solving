#include <stdio.h>
#include <string.h>

bool check(char p[], char str[]){
    int i;
    int plen = strlen(p);
    int slen = strlen(str);

    if (slen < plen-1) return false;

    for (i = 0; p[i] != '*'; i++){
        if (i >= slen || p[i] != str[i])
            return false;
    }
    for (i = 0; p[plen-1-i] != '*'; i++){
        if (slen-1-i < 0 || p[plen-1-i] != str[slen-1-i])
            return false;
    }
    return true;
}

int main(){
    int n, i;
    char pattern[201];
    char str[201];

    scanf("%d", &n);
    scanf("%s", pattern);
    for (i = 0; i < n; i++){
        scanf("%s", str);
        printf("%s\n", (check(pattern, str)?"DA":"NE"));
    }
    return 0;
}
