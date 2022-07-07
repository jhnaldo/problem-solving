#include <stdio.h>

void sort(int arr[], int size){
    int i, j;
    for (i = 0; i < size; i++){
        int min = i;
        for (j = i+1; j < size; j++){
            if (arr[min] > arr[j])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n, arr[1001];
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, n);
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
