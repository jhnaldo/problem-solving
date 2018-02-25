#include <stdio.h>

void print_int(int n, int k){
    int arr[20];
    int size = 0;
    int i;

    while (n){
        arr[size++] = n % k;
        n /= k;
    }
    if (size == 0) printf("0");
    for (i = size-1; i >= 0; i--)
        printf("%c", (arr[i] > 9? arr[i]-10 + 'A': arr[i] + '0'));
}

void print_double(long double n, int k){
    int i = 0;
    do{
        int int_n;
        n *= k;
        int_n = (int)n;
        printf("%c", (int_n > 9? int_n-10 + 'A': int_n + '0'));
        n -= (int) n;
        i++;
    }while(i < 10 && n);
}

int main(){
    long double n;
    int k;
    scanf("%Lf %d", &n, &k);
    print_int((int)n, k);
    printf(".");
    print_double(n - (int)n, k);
    printf("\n");
    return 0;
}
