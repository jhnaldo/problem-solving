#include <stdio.h>

int main(){
    char str[51];
    int i, count;
    scanf("%s", str);
    for (count = 1, i = 1; str[i]; i++)
        if (str[i-1] != str[i]) count++;
    printf("%d\n", i*5 + count*5);
    return 0;
}
