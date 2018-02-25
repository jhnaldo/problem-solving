#include <stdio.h>
#include <string.h>

void print(char str[], int k){
    if (k >= 0){
        printf("%c", str[k]);
        print(str, k-1);
    }
}

int main(){
    char str[50001];
    scanf("%s", str);
    print(str, strlen(str)-1);
    printf("\n");
    return 0;
}
