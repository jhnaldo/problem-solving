#include <stdio.h>

int main(){
    int n;
    int count[101] = {};
    int order[101] = {};
    int *arr;
    int cur = 1;
    int i;
    scanf("%d", &n);
    arr = new int[n];
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    for (i = 100; i >= 0; i--){
        if (count[i]){
            order[i] = cur;
            cur += count[i];
        }
    }

    for (i = 0; i < n; i++){
        printf("%d %d\n", arr[i], order[arr[i]]);
    }
}
