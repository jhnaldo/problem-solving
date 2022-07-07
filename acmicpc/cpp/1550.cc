#include <stdio.h>

int main(){
    char hex[7];
    int i, val = 0;

    scanf("%s", hex);
    for (i = 0; hex[i]; i++){
        val *= 16;
        val += ((hex[i]<='9')?hex[i]-'0':hex[i]-'A'+10);
    }
    printf("%d\n", val);
}
