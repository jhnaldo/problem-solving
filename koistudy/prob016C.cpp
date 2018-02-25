#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

int comp(const void* left, const void* right){
    return *(int*)left - *(int*)right;
}

int get(){
    int arr[4];
    int a, b, c, d;
    int i;
    for (i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 4, sizeof(int), comp);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    d = arr[3];

    if (a == b && b == c && c ==d) return 50000 + 5000*a;
    if ((a == b && b == c) || (b == c && c == d)) return 10000 + 1000*b;
    if (a == b && c == d) return 2000 + (a+c)*500;
    if (a == b || b == c) return 1000 + 100*b;
    if (c == d) return 1000 + 100*c;
    return MAX(a, MAX(b, MAX(c, d))) * 100;
}

int main(){
    int max, n;
    scanf("%d", &n);
    max = get();
    while (--n){
        int value = get();
        max = MAX(max, value);
    }
    printf("%d\n", max);
    return 0;
}
