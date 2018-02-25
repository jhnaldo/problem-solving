#include <stdio.h>

void print(char str[], int k){
    printf("%s\n", str+k);
    if (k) print(str, k-1);
}

void fill(char str[], int i){
    str[i] = '*';
    if (i) fill(str, i-1);
}

int main(){
    int n;
    char *str;
    scanf("%d", &n);
    str = new char[n+1];
    str[n] = '\0';
    fill(str, n-1);
    print(str, n-1);
    delete[] str;
}
