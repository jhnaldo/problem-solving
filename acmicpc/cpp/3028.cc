#include <stdio.h>

int main(){
    int i, cur = 1;
    char str[51];
    scanf("%s", str);
    for (i = 0; str[i]; i++){
        switch(str[i]){
            case 'A': if (cur != 3) cur = 3-cur; break;
            case 'B': if (cur != 1) cur = 5-cur; break;
            case 'C': if (cur != 2) cur = 4-cur; break;
        }
    }
    printf("%d\n", cur);
    return 0;
}
