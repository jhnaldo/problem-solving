#include <stdio.h>

#define MAX 1000000

int main(){
    int n, k, max = -MAX, i;
    bool check[2*MAX+1] = {0,};
    scanf("%d", &n);
    while (n--){
        int k;
        scanf("%d", &k);
        check[k+MAX] = true;
        max = (k>max?k:max);
    }
    for (i = 0; i <= 2*MAX; i++){
        if (check[i])
            printf("%d\n", i-MAX);
    }
    return 0;
}
