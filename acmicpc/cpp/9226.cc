#include <stdio.h>

int main(){
    char str[21];
    int size;

    scanf("%s", str);
    while(str[0] != '#'){
        for (int i = 0; str[i]; i++){
            switch(str[i]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    printf("%s", str+i);
                    str[i] = '\0';
            }
            if (!str[i]) break;
        }
        printf("%say\n", str);
        scanf("%s", str);
    }
    return 0;
}
