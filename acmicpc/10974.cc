#include <stdio.h>

void print_perm(int m, int pre[], int n, int arr[]){
    int i;
    if (n == 0){
        for (i = 0; i < m; i++)
            printf("%d ", pre[i]);
        printf("\n");
        return;
    }
    for (i = 0; i < n; i++){
        int j;
        int sub_arr[8];
        pre[m] = arr[i];
        for (j = 0; j < n-1; j++)
            sub_arr[j] = (j<i?arr[j]:arr[j+1]);
        print_perm(m+1, pre, n-1, sub_arr);
    }
}

int main(){
    int n, i;
    int pre[1], arr[8];
    scanf("%d", &n);
    for (i = 0; i < n; i++) arr[i] = i+1;
    print_perm(0, pre, n, arr);
    return 0;
}
