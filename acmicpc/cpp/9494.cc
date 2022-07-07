#include <stdio.h>
#include <string.h>

int main(){
    int n, i, cur, size;
    char str[100];

    scanf("%d", &n);
    while (n){
        cur = 0;
        for (i = 0; i < n; i++){
            scanf("\n%[^\n]", str);
            size = strlen(str);
            for (; cur < size && str[cur] != ' '; cur++);
        }
        printf("%d\n", cur+1);
        scanf("%d", &n);
    }
    return 0;
}
