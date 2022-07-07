#include <stdio.h>
#include <string.h>

int main(){
    char str[51];
    int size, i, res;

    scanf("%s", str);
    size = strlen(str);
    res = 10;
    for (i = 1; i < size; i++)
        res += (str[i-1]==str[i]?5:10);
    printf("%d\n", res);
    return 0;
}
