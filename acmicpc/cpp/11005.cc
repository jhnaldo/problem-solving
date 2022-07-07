#include <stdio.h>

int main(){
    int n, b, i, size;
    char str[40];
    scanf("%d %d", &n, &b);
    for (i = 0; n; n/=b, i++){
        int k = n%b;
        str[i] = (k<10?k+'0':k-10+'A');
    }
    size = i;
    str[size] = '\0';
    for (i = 0; i < size/2; i++){
        char temp = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = temp;
    }
    printf("%s\n", str);
    return 0;
}
