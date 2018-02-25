#include <stdio.h>

#define TO(x) ((x) >= 'A'? x-'A'+10: x-'0')

int main(){
    int n, k;
    char str[51] = {};
    int i, size;
    scanf("%d", &n);
    for (i = 0, k = n; k; k /= 2, i++)
        str[i] = (k%2?'1':'0');
    size = i;
    for (i = 0; i < size/2; i++){
        char ch = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = ch;
    }
    printf("2 %s\n", str);
    printf("8 %o\n", n);
    printf("16 %X\n", n);
    return 0;
}
