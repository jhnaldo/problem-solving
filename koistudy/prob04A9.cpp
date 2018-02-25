#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int i;
    int sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++){
        int check;
        scanf("%d", &check);
        sum += (check && arr[i] < 30? 30: arr[i]);
    }
    printf("%.2lf\n", (double)sum/n);
    return 0;
}
