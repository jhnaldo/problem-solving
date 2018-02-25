#include <stdio.h>

int five_six(char str[]){
    int i, result = 0;
    for (i = 0; str[i]; i++){
        int num = str[i]-'0';
        result *= 10;
        if (num == 5) num = 6;
        result += num;
    }
    return result;
}

int six_five(char str[]){
    int i, result = 0;
    for (i = 0; str[i]; i++){
        int num = str[i]-'0';
        result *= 10;
        if (num == 6) num = 5;
        result += num;
    }
    return result;
}

int main(){
    char left[11], right[11];
    scanf("%s %s", left, right);
    printf("%d %d\n", six_five(left)+six_five(right), five_six(left)+five_six(right));
    return 0;
}
