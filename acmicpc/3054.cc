#include <stdio.h>
#include <string.h>

int main(){
    char str[16];
    int size, i;

    scanf("%s", str);
    size = strlen(str);
    for (i = 1; i <= size; i++){
        printf("..%c.", (i%3?'#':'*'));
    }
    printf(".\n");
    for (i = 1; i <= size; i++){
        printf(".%c", (i%3?'#':'*'));
        printf(".%c", (i%3?'#':'*'));
    }
    printf(".\n");
    for (i = 1; i <= size; i++){
        printf("%c", (i==1 || i%3==2?'#':'*'));
        printf(".%c.", str[i-1]);
    }
    printf("%c\n", ((i-1)%3?'#':'*'));
    for (i = 1; i <= size; i++){
        printf(".%c", (i%3?'#':'*'));
        printf(".%c", (i%3?'#':'*'));
    }
    printf(".\n");
    for (i = 1; i <= size; i++){
        printf("..%c.", (i%3?'#':'*'));
    }
    printf(".\n");
    return 0;
}
