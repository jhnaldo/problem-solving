#include <stdio.h>
#include <stdlib.h>

int compare(const void *left, const void *right){
    return *(char*)left - *(char*)right;
}

bool is_m(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void find_passwd(int l, int c, char kind[], char str[], int cur, int count, int mcount, int jcount){
    if (count == l){
        if (mcount >= 1 && jcount >= 2){
            printf ("%s\n", str);
        }
    }else{
        int i;
        for (i = cur; i <= c-l+count; i++){
            str[count] = kind[i];
            find_passwd(l, c, kind, str, i+1, count+1, mcount+(is_m(kind[i])?1:0), jcount+(is_m(kind[i])?0:1));
        }
    }
}

int main(){
    int l, c, i;
    char kind[16];
    char str[16];
    scanf("%d %d", &l, &c);
    for (i = 0; i < c; i++){
        char tmp[2];
        scanf("%s", tmp);
        kind[i] = tmp[0];
    }
    str[l] = '\0';
    qsort(kind, c, sizeof(char), compare);
    find_passwd(l, c, kind, str, 0, 0, 0, 0);
    return 0;
}
