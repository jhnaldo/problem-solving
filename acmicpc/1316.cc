#include <stdio.h>
#include <string.h>

bool group (char str[]){
    int size = strlen(str);
    bool alpha[26] = {0,};
    int i;
    char before = '\0';

    for (i = 0; i < size; i++){
        if (before != str[i]){
            before = str[i];
            if (alpha[before-'a'])
                return false;
            alpha[before-'a'] = true;
        }
    }
    return true;
}

int main(){
    int n, count = 0;
    char str[101];

    scanf("%d", &n);
    for(; n > 0; n--){
        scanf("%s", str);
        if (group(str))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
