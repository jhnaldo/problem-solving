#include <stdio.h>

int main(){
    char str[101];
    int count[26] = {0,};
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        count[str[i]-'a']++;
    }
    printf("%d", count[0]);
    for (i = 1; i < 26; i++){
        printf(" %d", count[i]);
    }
    printf("\n");
    return 0;
}
