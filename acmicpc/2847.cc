#include <stdio.h>

int main(){
    int n, count = 0, i;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int j;
        scanf("%d", &arr[i]);
        for (j = 0; j < i; j++){
            if (arr[i]-j-1 <= arr[i-j-1]){
                count += arr[i-j-1] - (arr[i]-j-1);
                arr[i-j-1] = arr[i]-j-1;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
