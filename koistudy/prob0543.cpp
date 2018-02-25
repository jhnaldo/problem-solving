#include <stdio.h>

void star(int n){
    if (n){
        printf("*");
        star(n-1);
    }else{
        printf("\n");
    }
}

void display(int arr[], int k, int size){
    if (k < size){
        star(arr[k]);
        display(arr, k+1, size);
    }else{
        printf("\n");
    }
}

void print(int n, int k, int arr[], int size){
    if (!k && !n){
        display(arr, 0, size);
    }
    if (k){
        if (n >= k){
            arr[size] = k;
            print(n-k, k, arr, size+1);
        }
        print(n, k-1, arr, size);
    }
}

int main(){
    int n;
    int arr[20];
    scanf("%d", &n);
    print(n, n, arr, 0);
    return 0;
}
