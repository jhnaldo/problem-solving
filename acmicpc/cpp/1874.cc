#include <stdio.h>

int main(){
    int n, size, ser_size;
    int *arr, *stack, *series;
    int i, j;

    scanf("%d", &n);
    arr = new int[n];
    stack = new int[n];
    series = new int[n*2];
    for (i = 0; i < n; i++)
        scanf ("%d", &arr[i]);

    size = ser_size = 0;
    for (i = 0, j = 1; i < n; i++){
        for (; j <= arr[i]; j++){
            stack[size++] = j;
            series[ser_size++] = 1;
        }
        if (size && stack[size-1] == arr[i]){
            size--;
            series[ser_size++] = 0;
        }else{
            printf ("NO\n");
            return 0;
        }
    }
    for (i = 0; i < ser_size; i++){
        printf("%c\n", (series[i]?'+':'-'));
    }

    return 0;
}
