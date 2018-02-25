#include <stdio.h>
#include <string.h>

void swap(char &x, char &y){
    char tmp = x;
    x = y;
    y = tmp;
}

void reverse(char str[]){
    int i, size = strlen(str);
    for (i = 0; i < size/2; i++){
        swap(str[i], str[size-1-i]);
    }
}

void add(char left[], char right[], char res[]){
    int i, size;
    int lsize = strlen(left);
    int rsize = strlen(right);
    reverse(left);
    reverse(right);

    for (i = 0; i < lsize && i < rsize; i++) res[i] = (left[i]-'0')+(right[i]-'0');
    for (; i < lsize; i++) res[i] = (left[i]-'0');
    for (; i < rsize; i++) res[i] = (right[i]-'0');
    size = (lsize>rsize?lsize:rsize);

    for (i = 0; i < size; i++){
        if (res[i] > 9){
            res[i+1]++;
            res[i] -= 10;
        }
    }

    if (res[size]) size++;
    for (i = 0; i < size; i++) res[i] += '0';

    reverse(left);
    reverse(right);
    reverse(res);
}

int main(){
    int n, i;
    char pprev[1002] = "0";
    char prev[1002] = "1";
    char cur[1002] = {0,};

    scanf ("%d", &n);
    for (i = 0; i < n; i++){
        add(pprev, prev, cur);
        strcpy(pprev, prev);
        strcpy(prev, cur);
    }

    printf("%s\n", pprev);
    return 0;
}
