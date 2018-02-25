#include <stdio.h>

int main(){
    int n, tmp;
    int arr[7] = {};
    int i;
    scanf("%d", &n);
    for (tmp = n, i = 0; tmp; i++){
        arr[i] = tmp % 3;
        tmp /= 3;
        if (arr[i] >= 2){
            arr[i] -= 3;
            tmp++;
        }
    }

    printf("%d", n);
    for (tmp = 1, i = 0; i <= 6; i++, tmp *= 3){
        if (arr[i] < 0)
            printf(" %d", tmp);
    }
    printf(" 0");
    for (tmp = 1, i = 0; i <= 6; i++, tmp *= 3){
        if (arr[i] > 0)
            printf(" %d", tmp);
    }
    printf("\n");
    return 0;
}
