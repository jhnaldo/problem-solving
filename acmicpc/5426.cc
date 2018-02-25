#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int size, j, i;
        char str[10001];
        scanf("%s", str);
        size = strlen(str);
        size = sqrt(size);
        for (j = size-1; j >= 0; j--){
            for (i = 0; i < size; i++)
                printf("%c", str[i*size+j]);
        }
        printf("\n");
    }
    return 0;
}
