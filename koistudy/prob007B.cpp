#include <stdio.h>

int main(){
    int n, k, i;
    scanf("%d", &n);
    while (n--){
        char ch;
        int count = 0;
        for (i = 0; i < 4; i++){
            int k;
            scanf("%d", &k);
            if (k) count++;
        }
        switch(count){
            case 0: ch = 'M';break;
            case 1: ch = 'D';break;
            case 2: ch = 'K';break;
            case 3: ch = 'G';break;
            case 4: ch = 'U';break;
        }
        printf("%c ", ch);
    }
    printf("\n");
    return 0;
}
