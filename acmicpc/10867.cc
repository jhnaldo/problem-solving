#include <stdio.h>

int main(){
    int n, i;
    bool check[2001] = {0,};
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        check[k+1000] = true;
    }
    for (i = 0; i < 2001; i++)
        if (check[i]) printf("%d ", i-1000);
    printf("\n");
    return 0;
}
