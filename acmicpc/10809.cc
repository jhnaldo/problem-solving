#include <stdio.h>

int main(){
    char str[101];
    int first[26];
    int i;
    for (i = 0; i < 26; i++) first[i] = -1;
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        int pos = str[i]-'a';
        if (first[pos] == -1) first[pos] = i;
    }
    printf("%d", first[0]);
    for (i = 1; i < 26; i++)
        printf(" %d", first[i]);
    printf("\n");
    return 0;
}
