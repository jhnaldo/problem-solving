#include <stdio.h>
#include <string.h>

int main(){
    char str[10001];
    int len, koi, ioi;
    int i;
    scanf("%s", str);
    len = strlen(str);
    koi = ioi = 0;
    for (i = 2; i < len; i++){
        if (str[i-1] == 'O' && str[i] == 'I'){
            if (str[i-2] == 'K') koi++;
            if (str[i-2] == 'I') ioi++;
        }
    }
    printf("%d\n%d\n", koi, ioi);
    return 0;
}
