#include <stdio.h>

int main(){
    int count[24] = {};
    int n, i;
    scanf("%d", &n);
    while (n--) {
        int k;
        scanf("%d", &k);
        count[k]++;
    }
    for (i = 1; i <= 23; i++)
        printf("%d ", count[i]);
    printf("\n\n");
    return 0;
}
