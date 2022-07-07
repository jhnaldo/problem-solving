#include <stdio.h>
#include <string.h>

void print_set_num(int n){
    int i;
    printf("{");
    for (i = 0; i < n; i++){
        if (i) printf(",");
        print_set_num(i);
    }
    printf("}");
}

int main(){
    int n, i, j, len[16];
    len[0] = 2;
    for (i = 1; i < 16; i++){
        len[i] = 1;
        for (j = 0; j < i; j++)
            len[i] += len[j]+1;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        char left[81920], right[81920];
        int lsize, rsize, value;
        scanf("%s\n%s", left, right);
        lsize = strlen(left);
        rsize = strlen(right);
        for (j = 0; j < 16; j++)
            if (lsize == len[j]) break;
        value = j;
        for (j = 0; j < 16; j++)
            if (rsize == len[j]) break;
        value += j;
        print_set_num(value);
        printf("\n");
    }
    return 0;
}
