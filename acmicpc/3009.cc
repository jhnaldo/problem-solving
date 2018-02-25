#include <stdio.h>

int find (int arr[3]){
    if (arr[0] == arr[1]) return arr[2];
    if (arr[1] == arr[2]) return arr[0];
    if (arr[0] == arr[2]) return arr[1];
    return -1;
}

int main(){
    int x[3], y[3];

    scanf("%d %d", &x[0], &y[0]);
    scanf("%d %d", &x[1], &y[1]);
    scanf("%d %d", &x[2], &y[2]);
    printf("%d %d\n", find(x), find(y));
    return 0;
}
