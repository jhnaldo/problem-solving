#include <stdio.h>

int main(){
    int n;
    int arr[2000];
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int cur;
        scanf("%d", &cur);
        for (cur--, j = i; j > cur; j--) arr[j] = arr[j-1];
        arr[cur] = i+1;
    }
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    printf("\n");
    return 0;
}
