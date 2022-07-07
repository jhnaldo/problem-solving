#include <stdio.h>

int main(){
    int n;
    int arr[200], max[200], total_max = 0;
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        int cur_max = 0;
        for (j = 0; j < i; j++){
            if (arr[j] < arr[i] && max[j] > cur_max)
                cur_max = max[j];
        }
        max[i] = cur_max+1;
        total_max = (max[i] > total_max? max[i]:total_max);
    }
    printf("%d\n", n-total_max);
    return 0;
}
