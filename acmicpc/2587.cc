#include <stdio.h>

void sort(int arr[], int size){
    int i, j;
    for (i = 0; i < size; i++){
        int min = i;
        for (j = i+1; j < size; j++){
            if (arr[min] > arr[j])
                min = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main(){
    int arr[5], sum = 0;
    int i;

    for (i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr, 5);

    printf("%d\n%d\n", sum/5, arr[2]);
    return 0;
}
