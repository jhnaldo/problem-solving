#include <stdio.h>

#define ABS(k) ((k)<0?-(k):(k))

int main(){
    int n, front, back;
    char number[9];
    int i;

    scanf("%d", &n);
    for (; n > 0; n--){
        scanf("%s", number);
        front = back = 0;
        for (i = 0; i < 3; i++){
            front *= 26;
            front += number[i]-'A';
        }
        for (i = 4; i < 8; i++){
            back *= 10;
            back += number[i]-'0';
        }
        printf("%s\n", (ABS(front-back)<=100?"nice":"not nice"));
    }
    return 0;
}
