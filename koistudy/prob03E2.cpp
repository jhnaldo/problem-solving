#include <stdio.h>
#include <stdlib.h>

typedef long long LL;

int comp(const void* left, const void* right){
    if (*(LL*)left > *(LL*)right) return 1;
    else if (*(LL*)left < *(LL*)right) return -1;
    return 0;
}

int main(){
    LL arr[3];
    int i;
    for (i = 0; i < 3; i++)
        scanf("%lld", &arr[i]);
    qsort(arr, 3, sizeof(LL), comp);
    printf("%lld\n", arr[1]);
    return 0;
}
