#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    int i;
    char *str;

    scanf("%d", &n);
    str = new char[n+1];
    scanf("%s", str);
    for (i = 0; i < n; i++)
        sum += str[i] - '0';
    printf("%d\n", sum);
}
