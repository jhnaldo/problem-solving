#include <stdio.h>

void sort (int arr[], int size){
    int i, j;
    for (i = 0; i < size; i++){
        int min = i;
        for (j = i+1; j < size; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main(){
    int want = -100;
    int arr[9];
    bool check[9] = {0,};
    int i, j;

    for (i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        want += arr[i];
    }

    sort (arr, 9);
    for (i = 0; i < 72; i++){
        if (i/8!=i%8 && arr[i/8]+arr[i%8] == want)
            break;
    }
    for (j = 0; j < 9; j++)
        if (j != i/8 && j != i%8)
        printf("%d\n", arr[j]);
    return 0;
}
