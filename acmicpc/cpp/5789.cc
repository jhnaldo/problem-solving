#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[1001];
        int size;
        scanf("%s", str);
        size = strlen(str);
        printf("%s\n", (str[size/2-1]==str[size/2]?"Do-it":"Do-it-Not"));
    }
    return 0;
}
