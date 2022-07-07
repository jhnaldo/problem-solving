#include <stdio.h>
#include <string.h>

void swap(char &x, char &y){
    char tmp = x;
    x = y;
    y = tmp;
}

bool less(char str[], int from, int lto, int rto){
    int i, j;
    for (i = lto, j = rto; i >= from && j >= from; i--, j--){
        if (str[i] < str[j]) return true;
        else if (str[i] > str[j]) return false;
    }
    return (lto < rto);
}

int main(){
    int t;
    char str[51];
    char base[51];
    char temp[51];
    int size, i, j, k;

    scanf("%s", str);
    size = strlen(str);
    for (k = 0, i = 0; k < 2; k++){
        int min = i;
        for (j = i+1; j < size-2+k; j++){
            if (less(str, i, j, min))
                min = j;
        }
        int mid = (min+i)/2;
        for (j = i; j <= mid; j++)
            swap(str[j], str[(min+i)-j]);
        i = min+1;
    }
    int mid = (size-1+i)/2;
    for (j = i; j <= mid; j++)
        swap(str[j], str[(size-1+i)-j]);
    printf("%s\n", str);
    return 0;
}
