#include <stdio.h>
#include <algorithm>

int main(){
    int n, min = 4;
    int arr[10001];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    std::sort(arr,arr+n);

    for (i = 1, j = 1; i < n; i++, j++){
        while (arr[i-1] == arr[i]) i++;
        arr[j] = arr[i];
    }
    n = j;

    for (j = 0, i = 1; i < n; i++){
        while (arr[i] - arr[j] > 4) j++;
        if (4-i+j < min) min = 4-i+j;
    }
    printf("%d\n", min);

    return 0;
}
