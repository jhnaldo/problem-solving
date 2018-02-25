#include <stdio.h>

void doit(char op, long long numstack[], int &numsize){
    long long right = numstack[--numsize];
    long long left = numstack[--numsize];
    long long result;

    switch (op){
        case '+': result = left + right; break;
        case '-': result = left - right; break;
        case '*': result = left * right; break;
        case '/': result = left / right; break;
    }

    numstack[numsize++] = result;
}

int main(){
    long long numstack[100];
    char str[101];
    char opstack[100];
    int numsize = 0, opsize = 0, i;

    scanf("%s", str);
    for (i = 0; str[i]; i++){
        switch(str[i]){
            case '(': opstack[opsize++] = '('; break;
            case ')': while(opsize && opstack[opsize-1] != '(') doit(opstack[--opsize], numstack, numsize); opsize--; break;
            case '+': while(opsize && opstack[opsize-1] != '(') doit(opstack[--opsize], numstack, numsize); opstack[opsize++] = '+'; break;
            case '-':
                if (i == 0 || str[i-1] == '(' || str[i-1] == '+' || str[i-1] == '-' || str[i-1] == '*' || str[i-1] == '/'){
                    long long value = 0;
                    i++;
                    while ('0' <= str[i] && str[i] <= '9'){
                        value *= 10;
                        value += str[i++]-'0';
                    }
                    i--;
                    numstack[numsize++] = -value;
                }else{
                    while(opsize && opstack[opsize-1] != '(')
                        doit(opstack[--opsize], numstack, numsize);
                    opstack[opsize++] = '-';
                }
                break;
            case '*':
            case '/': while(opsize && (opstack[opsize-1] == '*' || opstack[opsize-1] == '/')) doit(opstack[--opsize], numstack, numsize); opstack[opsize++] = str[i]; break;
            default:
                long long value = 0;
                while ('0' <= str[i] && str[i] <= '9'){
                    value *= 10;
                    value += str[i++]-'0';
                }
                i--;
                numstack[numsize++] = value;
                break;

        }
    }
    while (opsize--)
        doit(opstack[opsize], numstack, numsize);
    printf("%lld\n", numstack[0]);
    return 0;
}
