#include <stdio.h>

void binary(int num, int arr[], int &size){
    size = 0;
    while(num){
        arr[size++] = num % 2;
        num/=2;
    }
}

int main(){
    long long int n, m, k;
    int arr[100], size;
    long long int i, mul, b;

    scanf("%lld %lld %lld", &n, &m, &k);
    binary(m, arr, size);

    mul = 1;
    b = n;
    for (i = 0; i < size; i++){
        if(arr[i]){
            mul *= b;
            mul %= k;
        }
        b *= b;
        b %= k;
    }
    printf("%lld\n", mul);
    return 0;
}
