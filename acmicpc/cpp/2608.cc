#include <stdio.h>
#include <string.h>

int rome2int(char str[]){
    int size = strlen(str);
    int ret = 0, i;
    for (i = 0; i < size; i++){
        switch (str[i]){
            case 'I':
                if (str[i+1] == 'V'){
                    ret += 4;
                    i++;
                }else if (str[i+1] == 'X'){
                    ret += 9;
                    i++;
                }else{
                    ret++;
                    for (; str[i+1] == 'I'; i++) ret++;
                }
                break;
            case 'V': ret += 5; break;
            case 'X':
                if (str[i+1] == 'L'){
                    ret += 40;
                    i++;
                }else if (str[i+1] == 'C'){
                    ret += 90;
                    i++;
                }else{
                    ret += 10;
                    for (; str[i+1] == 'X'; i++) ret += 10;
                }
                break;
            case 'L': ret += 50; break;
            case 'C':
                if (str[i+1] == 'D'){
                    ret += 400;
                    i++;
                }else if (str[i+1] == 'M'){
                    ret += 900;
                    i++;
                }else{
                    ret += 100;
                    for (; str[i+1] == 'C'; i++) ret += 100;
                }
                break;
            case 'D': ret += 500; break;
            case 'M': ret += 1000; break;
        }
    }
    return ret;
}

char* int2rome(int num){
    char *str = new char[21];
    int i = 0;
    for (; num >= 1000; num -= 1000) str[i++] = 'M';
    if (num/100 == 4){
        str[i++] = 'C';
        str[i++] = 'D';
        num %= 100;
    }else if(num/100 == 9){
        str[i++] = 'C';
        str[i++] = 'M';
        num %= 100;
    }else{
        if (num >= 500){
            str[i++] = 'D';
            num -= 500;
        }
        for (; num >= 100; num -= 100) str[i++] = 'C';
    }
    if (num/10 == 4){
        str[i++] = 'X';
        str[i++] = 'L';
        num %= 10;
    }else if(num/10 == 9){
        str[i++] = 'X';
        str[i++] = 'C';
        num %= 10;
    }else{
        if (num >= 50){
            str[i++] = 'L';
            num -= 50;
        }
        for (; num >= 10; num -= 10) str[i++] = 'X';
    }
    if (num == 4){
        str[i++] = 'I';
        str[i++] = 'V';
    }else if(num == 9){
        str[i++] = 'I';
        str[i++] = 'X';
    }else{
        if (num >= 5){
            str[i++] = 'V';
            num -= 5;
        }
        for (; num; num--) str[i++] = 'I';
    }

    str[i] = '\0';
    return str;
}

int main(){
    char str[21];
    int num1, num2, i;

    scanf("%s", str);
    num1 = rome2int(str);
    scanf("%s", str);
    num2 = rome2int(str);
    printf ("%d\n%s\n", num1+num2, int2rome(num1+num2));
    return 0;
}
