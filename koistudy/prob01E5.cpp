#include <stdio.h>

int main(){
    int n;
    int i;
    char *str;
    scanf("%d", &n);
    str = new char[n+1];
    for (i = 0; i < n; i++)
        str[i] = '*';
    str[n] = '\0';
    for (i = n-1; i >= 0; i--){
        printf("%s\n", str+i);
    }
    return 0;
}
