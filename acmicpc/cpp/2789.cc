#include <stdio.h>

int main(){
    char str[101];
    int i;

    scanf("%s", str);
    for (i = 0; str[i]; i++){
        switch(str[i]){
            case 'C':
            case 'A':
            case 'M':
            case 'B':
            case 'R':
            case 'I':
            case 'D':
            case 'G':
            case 'E':
                break;
            default:
                printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
