#include <stdio.h>

int main(){
    int n;
    int weight[50], height[50];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d %d", &weight[i], &height[i]);

    for (i = 0; i < n; i++){
        int count = 1;
        for (j = 0; j < n; j++){
            if (weight[i] < weight[j] && height[i] < height[j])
                count++;
        }
        printf("%d ", count);
    }
    printf("\n");
    return 0;
}
