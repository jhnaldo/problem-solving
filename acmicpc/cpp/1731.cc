#include <stdio.h>

int main(){
    int n, i;
    int arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if (arr[2]-arr[1] == arr[1]-arr[0]){
        printf("%d\n", arr[n-1]-arr[0]+arr[1]);
    }else{
        printf("%d\n", arr[n-1]/arr[0]*arr[1]);
    }
    return 0;
}
