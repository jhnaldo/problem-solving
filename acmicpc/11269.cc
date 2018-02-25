#include <stdio.h>

int main(){
    int count = 0, i;
    char str[301];
    scanf("%s", str);
    for (i = 0; str[i]; i+=3){
        if (str[i+0] != 'P') count++;
        if (str[i+1] != 'E') count++;
        if (str[i+2] != 'R') count++;
    }
    printf("%d\n", count);
    return 0;
}
