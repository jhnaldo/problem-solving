#include <stdio.h>

int main(){
    long long int arr[10000], sum;
    int size, k;
    int i, j, count;

    scanf("%d %d", &size, &k);
    for (i = 0; i < size; i++)
        scanf("%lld", &arr[i]);

    sum = arr[0];
    i = j = count = 0;
    while (i < size){
        if (sum == k) count++;
        if (sum < k) sum += arr[++j];
        else sum -= arr[i++];
    }

    printf("%d\n", count);
    return 0;
}
