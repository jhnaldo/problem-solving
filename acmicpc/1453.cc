#include <stdio.h>

int main(){
    int n, i, count = 0;
    bool check[100] = {0,};
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int want;
        scanf("%d", &want);
        if (check[want-1]){
            count++;
        }else{
            check[want-1] = true;
        }
    }
    printf("%d\n", count);
    return 0;
}
