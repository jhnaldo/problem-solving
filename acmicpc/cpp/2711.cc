#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char str[81];
    int size, k, i;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d %s", &k, str);
        size = strlen(str);
        for (i = 0; i < size; i++){
            if (i+1!=k)
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
