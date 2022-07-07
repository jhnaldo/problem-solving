#include <stdio.h>

int main(){
    int n, i, j, k;
    bool check[1000] = {0,};
    int result[1000];
    scanf("%d", &n);
    for (i = 0, k = 0; i < n; i++){
        for (j = 0; j < i+1; j++){
            k = (k == n-1?0:k+1);
            while (check[k]) k = (k == n-1?0:k+1);
        }
        check[k] = true;
        result[k] = i+1;
        while (i < n-1 && check[k]) k = (k == n-1?0:k+1);
    }

    for (i = 0; i < n; i++)
        printf("%d ", result[i]);
    printf("\n");
    return 0;
}
