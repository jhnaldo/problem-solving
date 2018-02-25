#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(int*)left - *(int*)right;
}

bool check(int n){
    int arr[5];
    int i;
    for (i = 0; n; i++){
        arr[i] = n%10;
        n /= 10;
    }
    qsort(arr, i, sizeof(int), comp);
    for (; i > 0; i--){
        if (arr[i] == arr[i-1])
            return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    while (!check(++n));
    printf("%d\n", n);
    return 0;
}
