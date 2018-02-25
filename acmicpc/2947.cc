#include <stdio.h>

#define SIZE 5

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int i, j;
    int arr[SIZE];
    bool check;

    for (i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    do{
        check = false;
        for (i = 0; i < SIZE-1; i++){
            if (arr[i] > arr[i+1]){
                check = true;
                swap(arr[i], arr[i+1]);
                for (j = 0; j < SIZE; j++)
                    printf("%d ", arr[j]);
                printf("\n");
            }
        }
    }while(check);

    return 0;
}
