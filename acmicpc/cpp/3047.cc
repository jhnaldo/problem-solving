#include <stdio.h>

void swap (int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int arr[3];
    char order[4];
    int i;

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    if (arr[0] > arr[1]) swap(arr[0], arr[1]);
    if (arr[1] > arr[2]) swap(arr[1], arr[2]);
    if (arr[0] > arr[1]) swap(arr[0], arr[1]);
    scanf("%s", order);
    for (i = 0; i < 3; i++)
        printf("%d ", arr[order[i]-'A']);
    printf("\n");
    return 0;
}
