#include <stdio.h>

int alpha(char ch){
    int ret = 0;
    switch (ch){
        case 'A': ret = 4; break;
        case 'B': ret = 3; break;
        case 'C': ret = 2; break;
        case 'D': ret = 1; break;
        case 'F': ret = 0; break;
    }
    return ret;
}

float zero(char ch){
    float ret = 0;
    switch (ch){
        case '+': ret = 0.3; break;
        case '0': ret = 0.0; break;
        case '-': ret = -0.3; break;
    }
    return ret;
}

int main(){
    char str[3];

    scanf("%s", str);
    printf("%.1f\n", alpha(str[0])+zero(str[1]));
    return 0;
}
