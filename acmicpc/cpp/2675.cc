#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int k, i, j;
        char str[21];
        scanf("%d %s", &k, str);
        for (i = 0; str[i]; i++){
            for (j = 0; j < k; j++)
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
