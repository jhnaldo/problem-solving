#include <stdio.h>

int display(int n, char* ptr){
    int count = 0;
    if (n){
        count += display(n-1, ptr+1);
        printf("%s\n", ptr);
        count += n;
        count += display(n-1, ptr+1);
    }
    return count;
}

int main(){
    int n, i;
    char* str;
    scanf("%d", &n);
    str = new char[n+1]();
    for (i = 0; i < n; i++) str[i] = '*';
    printf("%d\n", display(n, str));
    delete[] str;
    return 0;
}
