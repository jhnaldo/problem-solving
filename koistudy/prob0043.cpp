#include <stdio.h>

int main(){
    int n;
    char ch;
    scanf("%d", &n);
    if (n >= 90) ch = 'A';
    else if (n >= 70) ch = 'B';
    else if (n >= 40) ch = 'C';
    else  ch = 'D';
    printf("%c\n", ch);
    return 0;
}
