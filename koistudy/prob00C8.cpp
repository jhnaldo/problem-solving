#include <stdio.h>

int main(){
    int n;
    int *arr;
    int *height, size;
    long long *weight, sum = 0;
    int i;
    scanf("%d", &n);
    arr = new int[n];
    height = new int[n];
    weight = new long long[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    height[0] = arr[n-1];
    weight[0] = 1;
    size = 1;
    for (i = n-2; i >= 0; i--){
        long long count = 0;
        while (size && arr[i] > height[size-1])
            count += weight[--size];
        sum += count;
        height[size] = arr[i];
        weight[size] = count+1;
        size++;
    }
    printf("%lld\n", sum);

    delete[] arr;
    delete[] height;
    delete[] weight;
    return 0;
}
