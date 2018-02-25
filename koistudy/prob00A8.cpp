#include <stdio.h>

int main(){
    int k, n;
    int coin[20];
    int *count;
    int i, j;
    scanf("%d %d", &k, &n);
    count = new int[k+1]();
    for (i = 0; i < n; i++)
        scanf("%d", &coin[i]);

    for (i = 1; i <= k; i++){
        count[i] = -1;
        for (j = 0; j < n; j++){
            if (i >= coin[j] && count[i-coin[j]] != -1 && (count[i] == -1 || count[i] > count[i-coin[j]] + 1))
                count[i] = count[i-coin[j]] + 1;
        }
    }
    printf("%d\n", count[k]);

    return 0;
}
