#include <stdio.h>
#include <algorithm>

int kaprekar(int k){
    int arr[4], i;
    for (i = 0; i < 4; i++){
        arr[i] = k % 10;
        k /= 10;
    }

    std::sort(arr, arr+4);

    int big, small;
    big = small = 0;
    for (i = 0; i < 4; i++){
        big *= 10;
        big += arr[3-i];
        small *= 10;
        small += arr[i];
    }
    return big-small;
}

int main(){
    int n;

    scanf("%d", &n);
    while(n--){
        int k, c;
        scanf("%d", &k);
        for (c = 0; k != 6174; c++) k = kaprekar(k);
        printf("%d\n", c);
    }
    return 0;
}
