#include <stdio.h>
#include <string.h>

int main(){
    char a[51], b[51];
    int alen, blen;
    int i, j, min = -1;

    scanf("%s %s", a, b);
    alen = strlen(a);
    blen = strlen(b);

    for (i = 0; i+alen <= blen; i++){
        int diff = 0;
        for (j = 0; j < alen; j++){
            if (a[j] != b[i+j]) diff++;
        }
        if (min == -1 || min > diff) min = diff;
    }
    printf("%d\n", min);
}
