#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        char str[27] = "abcdefghijklmnopqrstuvwxyz";
        scanf("%d", &n);
        while (n--){
            int k, i;
            char tmp;
            scanf("%d", &k);
            tmp = str[k];
            printf("%c", tmp);
            for (i = k; i > 0; i--)
                str[i] = str[i-1];
            str[0] = tmp;
        }
        printf("\n");
    }
    return 0;
}
