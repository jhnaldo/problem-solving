#include <stdio.h>
#include <string.h>

#define T true
#define F false

int main(){
    bool check[9][9] = {
        {F,F,F,F,F,F,F,F,F},
        {F,F,F,F,T,T,F,F,F},
        {F,F,F,F,F,F,F,F,F},
        {F,F,F,F,T,T,F,F,F},
        {F,F,T,T,F,F,F,F,F},
        {F,F,F,F,F,F,F,F,T},
        {F,F,T,T,F,F,F,F,F},
        {F,F,F,F,F,F,F,F,T},
        {F,F,F,F,F,F,T,T,F}
    };
    char cube[10001];
    int c, size, i, before;

    for (c = 1; true; c++){
        scanf("%s", cube);
        if (cube[0] == '0') break;

        size = strlen(cube);
        if (cube[0] != '1'){
            printf("%d. NOT\n", c);
            continue;
        }

        before = 1;
        for (i = 1; i < size; i++){
            if (!check[before][cube[i]-'0'])
                break;
            before = cube[i]-'0';
        }
        printf("%d. %s\n", c, ((i==size && cube[size-1]=='2')?"VALID":"NOT"));
    }
    return 0;
}
