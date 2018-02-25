#include <stdio.h>

int main(){
    char ch, i;
    scanf("%c", &ch);
    for (i = 'a'; i <= ch; i++)
        printf("%c\n", i);
    return 0;
}
