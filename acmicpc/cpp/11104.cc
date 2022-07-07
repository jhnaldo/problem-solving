#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char str[25];
        int i, res = 0;
        scanf("%s", str);
        for (i = 0; str[i]; i++){
            res *= 2;
            res += str[i]-'0';
        }
        printf("%d\n", res);
    }
    return 0;
}
