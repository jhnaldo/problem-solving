#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int k, i, before, count = 0;
        int arr[15];
        scanf("%d", &k);
        scanf("%d", &before);
        for (i = 1; i < 15; i++){
            int cur;
            scanf("%d", &cur);
            if (cur < before) count++;
            before = cur;
        }
        printf("%d %d\n", k, count);
    }
    return 0;
}
