#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char str[10000];
        char after[10000] = {0,};
        int len, k, i;

        scanf("%s", str);
        len = strlen(str);
        for (k = 1; k*k < len; k++);
        for (i = 0; i < len; i++){
            int x, y;
            x = i/k;
            y = i%k;
            after[y*k+(k-1-x)] = str[i];
        }
        for (i = 0; i < k*k; i++){
            if (after[i])
                printf("%c", after[i]);
        }
        printf("\n");
    }
    return 0;
}
