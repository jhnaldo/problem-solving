#include <stdio.h>
#include <string.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    char str[5][16];
    int length[5];
    int i, j, max_len = 0;

    for (i = 0; i < 5; i++){
        scanf("%s", str[i]);
        length[i] = strlen(str[i]);
        max_len = MAX(max_len, length[i]);
    }

    for (i = 0; i < max_len; i++){
        for (j = 0; j < 5; j++){
            if (i < length[j]) printf("%c", str[j][i]);
        }
    }
    printf("\n");
    return 0;
}
