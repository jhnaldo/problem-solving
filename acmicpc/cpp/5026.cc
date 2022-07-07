#include <stdio.h>

int add(char str[]){
    int num1, num2, i;
    num1 = num2 = 0;
    for (i = 0; str[i] != '+'; i++){
        num1 *= 10;
        num1 += str[i]-'0';
    }
    for (i++; str[i]; i++){
        num2 *= 10;
        num2 += str[i]-'0';
    }
    return num1+num2;
}

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        char str[21];
        scanf("%s", str);
        if (str[0] == 'P') printf("skipped\n");
        else printf("%d\n", add(str));
    }
    return 0;
}
