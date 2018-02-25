#include <stdio.h>
#include <string.h>

int main(){
    char name[51];
    int len, i, j, arr[26] = {0,};
    int odd = -1;

    scanf("%s", name);
    len = strlen(name);
    for (i = 0; i < len; i++)
        arr[name[i]-'A']++;
    for (i = 0; i < 26; i++){
        if (arr[i] % 2){
            if (odd != -1){
                printf("I'm Sorry Hansoo\n");
                return 0;
            }
            odd = i;
        }
    }
    for (i = 0; i < 26; i++)
        for (j = 1; j < arr[i]; j+=2) printf("%c", 'A'+i);
    if (odd != -1)
        printf("%c", 'A'+odd);
    for (i = 25; i >= 0; i--)
        for (j = 1; j < arr[i]; j+=2) printf("%c", 'A'+i);
    printf("\n");
    return 0;
}
