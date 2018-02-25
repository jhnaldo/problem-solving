#include <stdio.h>

int main(){
    int n;
    long long arr[2][21] = {};
    int check, tmp, value;
    int i, j;

    scanf("%d", &n);
    scanf("%d", &value);
    check = 0;
    tmp = 1;
    arr[check][value] = 1;
    for (i = 1; i < n - 1; i++){
        scanf("%d", &value);
        for (j = 0; j <= 20; j++){
            arr[tmp][j] = 0;
            if (j - value >= 0  && arr[check][j-value]) arr[tmp][j] += arr[check][j-value];
            if (j + value <= 20 && arr[check][j+value]) arr[tmp][j] += arr[check][j+value];
        }
        tmp = 1 - tmp;
        check = 1 - check;
    }
    scanf("%d", &value);
    printf("%lld\n", arr[check][value]);
    return 0;
}
