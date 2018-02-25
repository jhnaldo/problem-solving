#include <stdio.h>

int main(){
    char str[11];
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        if (str[i] <= 'E') str[i] -= 'A';
        else str[i] -= 'a' - 5;
        str[i] += '0';
    }
    for (i = 0; str[i] && str[i] == '0'; i++);
    printf("%s\n", str + i);

    return 0;
}
