#include <stdio.h>

char check(char str[], int from){
    int i, j;
    char alpha[8][7] = {
        "000000",
        "001111",
        "010011",
        "011100",
        "100110",
        "101001",
        "110101",
        "111010"};
    for (i = 0; i < 8; i++){
        int count = 0;
        for (j = 0; j < 6; j++)
            if (alpha[i][j] != str[from+j]) count++;
        if (count <= 1){
            return 'A'+i;
        }
    }
    return 0;
}

int main(){
    int n, i;
    char str[61];
    char res[11];
    scanf("%d\n%s", &n, str);
    for (i = 0; i < n; i++){
        char ch = check(str, i*6);
        if (ch){
            res[i] = ch;
        }else{
            break;
        }
    }
    if (i == n){
        res[i] = '\0';
        printf("%s\n", res);
    }else{
        printf("%d\n", i+1);
    }
    return 0;
}
