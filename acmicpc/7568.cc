#include <stdio.h>

int main(){
    int n, i, j;
    int x[50], y[50], order[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
        order[i] = 1;
        for (j = 0; j < i; j++){
            if (x[j] < x[i] && y[j] < y[i]) order[j]++;
            if (x[j] > x[i] && y[j] > y[i]) order[i]++;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", order[i]);
    printf("\n");
    return 0;
}
