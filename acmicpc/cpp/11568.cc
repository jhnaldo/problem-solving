#include <stdio.h>

int main(){
    int n, i, j, max = 0;
    int arr[1000];
    int count[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        count[i] = 1;
        for (j = 0; j < i; j++){
            if (arr[j] < arr[i] && count[j]+1 > count[i])
                count[i] = count[j]+1;
        }
        if (max < count[i])
            max = count[i];
    }
    printf("%d\n", max);
    return 0;
}
