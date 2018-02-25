#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(int*)left - *(int*)right;
}

void swap(int &n, int &m){
    int tmp = n;
    n = m;
    m = tmp;
}

int gcd(int n, int m){
    if (n < m) swap(n, m);
    while(n % m){
        n %= m;
        swap(n, m);
    }
    return m;
}

int main(){
    int n;
    int arr[100000];
    int g, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), comp);

    g = arr[1] - arr[0];
    for (i = 2; i < n; i++)
        g = gcd(g, arr[i] - arr[i-1]);
    printf("%d\n", (arr[n-1] - arr[0]) / g + 1 - n);

    return 0;
}
