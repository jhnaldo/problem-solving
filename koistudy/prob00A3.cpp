#include <stdio.h>

int main(){
    int key;
    char str[9];
    int i;
    scanf("%d", &key);
    scanf("%s", str);
    for (i = 0; str[i]; i++) str[i] += key;
    printf("%s\n", str);
    return 0;
}
