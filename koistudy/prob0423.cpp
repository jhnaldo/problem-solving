#include <stdio.h>

bool prime(int arr[], int size, int n){
    int i;
    for (i = 0; i < size && arr[i] * arr[i] <= n; i++){
        if (n % arr[i] == 0)
            return false;
    }
    return true;
}

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int from, to;
    int cur;
    int arr[100000];
    int count = 0;
    int i, min, max;

    scanf("%d %d", &from, &to);
    if (from > to) swap(from, to);

    min = max = 0;
    for (cur = 1, i = 0; true; i++){
        while (!prime(arr, i, ++cur));
        if (from <= cur && cur <= to){
            count++;
            if (!min) min = cur;
            max = cur;
        }else if(cur > to){
            break;
        }
        arr[i] = cur;
    }
    printf("%d\n%d\n", count, min + max);
    return 0;
}
