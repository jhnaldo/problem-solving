#include <stdio.h>

int multiple(char exp[]){
    int res = 0;
    for (int i = 0; true; i+=2){
        int cur = exp[i]-'0';
        while (exp[i+1] == '*'){
            i+=2;
            cur *= exp[i]-'0';
        }
        res += cur;
        if (!exp[i+1]) break;
    }
    return res;
}

int left2right(char exp[]){
    int res = exp[0]-'0';
    for (int i = 1; exp[i]; i+=2){
        if (exp[i] == '+'){
            res += exp[i+1]-'0';
        }else{
            res *= exp[i+1]-'0';
        }
    }
    return res;
}

int main(){
    char exp[18];
    int wanted;
    bool mul, ltor;

    scanf("%s", exp);
    scanf("%d", &wanted);

    mul = (multiple(exp) == wanted);
    ltor = (left2right(exp) == wanted);

    printf("%c\n", (mul?(ltor?'U':'M'):(ltor?'L':'I')));
    return 0;
}
