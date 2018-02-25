#include <stdio.h>

long long getNum(char* &str){
    long long cur;
    for (cur = 0;'0' <= *str && *str <= '9'; str++){
        cur *= 10;
        cur += (*str) - '0';
    }
    return cur;
}

int main(){
    char *str = new char[21];
    char *tmp = str;
    long long  n;
    scanf("%s", str);
    n = getNum(str);

    while (*str){
        char op = *(str++);
        if (op == '+') n += getNum(str);
        else n -= getNum(str);
    }
    printf("%lld\n", n);

    delete[] tmp;
    return 0;
}
