#include <stdio.h>

int main(){
    char stack[51], str[51];
    int size = 0, i;

    scanf("%s", str);
    for (i = 0; str[i]; i++){
        switch(str[i]){
            case '(': stack[size++] = '('; break;
            case ')': while(size && stack[size-1] != '(') printf("%c", stack[--size]); size--; break;
            case '+':
            case '-': while(size && stack[size-1] != '(') printf("%c", stack[--size]); stack[size++] = str[i]; break;
            case '*':
            case '/': while(size && (stack[size-1] == '*' || stack[size-1] == '/')) printf("%c", stack[--size]); stack[size++] = str[i]; break;
            default: printf("%c", str[i]);
        }
    }
    while (size--) printf("%c", stack[size]);
    printf("\n");
    return 0;
}
