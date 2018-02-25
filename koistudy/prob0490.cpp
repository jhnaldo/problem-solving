#include <stdio.h>

int main(){
    int k, n;
    int count[10] = {};
    int i, max;
    scanf("%d %d", &k, &n);
    for (i = 0; i < n; i++){
        int vote;
        scanf("%d", &vote);
        count[vote]++;
    }
    for (i = max = 0; i <= 9; i++)
        max = (max<count[i]?count[i]:max);
    for (i = 1; i <= 9; i++){
        if (count[i] == max)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
