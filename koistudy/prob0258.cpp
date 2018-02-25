#include <stdio.h>

int main(){
    int n;
    char *str;
    int i;
    int cur = 0;
    scanf("%d", &n);
    str = new char[n+1];
    scanf("%s", str);
    for (i = 0; i < n; i++){
        if (str[n-i-1] == '1'){
            cur += 1 + (i%2);
            cur %= 3;
        }
    }
    printf("%s\n", (cur?"False":"True"));
    delete[] str;
    return 0;
}
