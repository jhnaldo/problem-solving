#include <stdio.h>
#include <string.h>

int main(){
    int n, size;
    char *_str, *_rev;
    char *str, *rev;
    int i;

    scanf("%d", &n);
    size = n;
    str = _str = new char[n+1];
    rev = _rev = new char[n+1];

    scanf("%s", str);
    for (i = 0; i < n; i++)
        rev[i] = str[n-i-1];

    for (i = 0; i < n; i++){
        if (strcmp(str, rev) < 0){
            printf("%c", str[0]);
            str++;
            rev[--size] = '\0';
        }else{
            printf("%c", rev[0]);
            rev++;
            str[--size] = '\0';
        }
    }
    printf("\n");

    delete[] _str;
    delete[] _rev;

    return 0;
}
