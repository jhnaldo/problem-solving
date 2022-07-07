#include <stdio.h>
#include <algorithm>

int gcd (int a, int b){
    int tmp;
    if (a < b){
        tmp = a;
        a = b;
        b = tmp;
    }
    while ((tmp = a%b)){
        a = b;
        b = tmp;
    }
    return b;
}

int main(){
    int n, i;
    int arr[100001];
    int interval;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    std::sort(arr, arr+n);
    interval = arr[1]-arr[0];
    for (i = 2; i < n; i++) interval = gcd(interval, arr[i]-arr[i-1]);
    printf ("%d\n", (arr[n-1]-arr[0])/interval+1-n);
    return 0;
}
