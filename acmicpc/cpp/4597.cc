#include <stdio.h>

int main(){
    while(true){
        int i;
        char str[32];
        bool check = false;
        scanf("%s", str);
        if (str[0] == '#') break;
        for (i = 0; str[i+1]; i++)
            if (str[i] == '1') check = !check;
        str[i] = (str[i]=='e' && check) || (str[i]=='o' && !check)? '1':'0';
        printf("%s\n", str);
    }
    return 0;
}
