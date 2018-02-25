#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int i, j;
    int arr[20];

    for (i = 0; i < 20; i++)
        arr[i] = i+1;

    for (i = 0; i < 10; i++){
        int from, to;
        scanf("%d %d", &from, &to);
        for (j = 0; j < to-from-j; j++)
            swap(arr[from+j-1], arr[to-j-1]);
    }
    for (i = 0; i < 20; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
