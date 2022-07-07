#include <stdio.h>

int main(){
    int n, arr[100];
    int i, j, card;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &card);
        j = i;
        while (j > i-card){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = i+1;
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
