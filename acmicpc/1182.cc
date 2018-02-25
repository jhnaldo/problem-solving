#include <stdio.h>

void counting(int arr[], int n, int k, int sum, int s, int &count){
    if (k == n){
        if (sum == s) count++;
        return;
    }

    counting(arr, n, k+1, sum, s, count);
    counting(arr, n, k+1, sum+arr[k], s, count);
}

int main(){
    int n, s, i, count = 0;
    int arr[20];
    scanf("%d %d", &n, &s);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    counting(arr, n, 0, 0, s, count);

    if (s == 0) count--;
    printf("%d\n", count);
    return 0;
}
