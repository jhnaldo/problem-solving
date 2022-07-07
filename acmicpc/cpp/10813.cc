#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n, m, i;
    int arr[101];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) arr[i] = i+1;
    for (i = 0; i < m; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        swap(arr[x-1], arr[y-1]);
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
