#include <stdio.h>

int f(int n){
    int result = 0;
    while(n){
        result *= 10;
        result += n % 10;
        n /= 10;
    }
    return result;
}

bool is_Pal(int n){
    int arr[20];
    int size;
    int i;
    for (size = 0; n; size++){
        arr[size] = n % 10;
        n /= 10;
    }
    for (i = 0; i < size/2; i++){
        if (arr[i] != arr[size-i-1])
            return false;
    }
    return true;
}

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for( cnt = 0 ; !is_Pal(n) ; cnt++ )
    {
        n = n + f(n);
    }
    printf("%d %d", cnt, n);
    return 0;
}
