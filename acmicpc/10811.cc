#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n, m, i;
    int arr[100];
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) arr[i] = i+1;
    for (i = 0; i < m; i++){
        int from, to, j;
        scanf("%d %d", &from, &to);
        for (j = from; j <= (to+from)/2; j++){
            swap(arr[j-1], arr[from+to-j-1]);
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
