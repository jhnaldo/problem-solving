#include <stdio.h>
#include <string.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

void swap (char &x, char &y){
    char tmp = x;
    x = y;
    y = tmp;
}

void reverse (char str[], int size){
    int i;
    for (i = 0; i < size/2; i++)
        swap(str[i], str[size-1-i]);
}

void _add (char left, char right, char &front, char &cur){
    int val = (left-'0') + (right-'0') + (cur-'0');
    front = (val/2) + '0';
    cur = (val%2) + '0';
}

void add (char left[], int lsize, char right[], int rsize, char result[], int &size){
    int i;
    result[0] = '0';
    for (i = 0; i < lsize && i < rsize; i++)
        _add(left[i], right[i], result[i+1], result[i]);
    for (i = lsize; i < rsize; i++)
        _add('0', right[i], result[i+1], result[i]);
    for (i = rsize; i < lsize; i++)
        _add(left[i], '0', result[i+1], result[i]);

    size = MAX(lsize, rsize);
    if (result[size] == '1') size++;
    result[size] = '\0';
}

int main(){
    char binary[1001], binary16[1005], result[1006];
    int i, blen, b16len, rlen;
    scanf("%s", binary);
    if (!strcmp(binary, "0")){
        printf("0\n");
        return 0;
    }

    blen = strlen(binary);
    reverse(binary, blen);
    strcpy(binary16+4, binary);
    for (i = 0; i < 4; i++) binary16[i] = '0';
    b16len = strlen(binary16);
    add(binary, blen, binary16, b16len, result, rlen);
    reverse(result, rlen);
    printf("%s\n", result);
    return 0;
}
