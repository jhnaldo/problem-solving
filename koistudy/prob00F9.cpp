#include <stdio.h>

int get(){
    char str[7];
    char *ptr = str;
    int cur;
    scanf("%s", str);
    for (cur = 1; *ptr; ptr++) cur *= (*ptr)-'A'+1;
    return cur % 47;
}

int main(){
    printf("%s\n", (get() == get()? "GO": "STAY"));
    return 0;
}
