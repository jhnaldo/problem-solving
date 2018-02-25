#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

void qsort(int arr[], int from, int to){
    if (from < to){
        int mid = (from+to)/2;
        int i, j;
        swap(arr[from], arr[mid]);

        i = from + 1;
        j = to;
        while(true){
            while (i <= to && arr[i] <= arr[from]) i++;
            while (j > from && arr[j] >= arr[from]) j--;
            if (i <= to && j > from && i < j){
                swap(arr[i], arr[j]);
            }else{
                swap(arr[from], arr[j]);
                break;
            }
        }
        qsort(arr, from, j-1);
        qsort(arr, j+1, to);
    }
}

int main(){
    int n;
    int arr[100000];
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, 0, n-1);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
