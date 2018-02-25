#include <stdio.h>
#include <string.h>

int main(){
    char str[10001];
    int i, jcount, icount;
    scanf("%s", str);
    if (strlen(str) < 3){
        printf("0\n");
        return 0;
    }
    jcount = icount = 0;
    for (i = 2; str[i]; i++){
        if (str[i] == 'I' && str[i-1] == 'O'){
            if (str[i-2] == 'J') jcount++;
            if (str[i-2] == 'I') icount++;
        }
    }
    printf("%d\n%d\n", jcount, icount);
    return 0;
}
