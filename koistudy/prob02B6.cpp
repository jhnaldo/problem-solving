#include <stdio.h>

#define BOUND 1000000;

int main(){
    int n;
    int arr[2][3] = {
        {1, 0},
        {2, 1}
    };

    scanf("%d", &n);
    while (--n){
        int tmp[3];
        tmp[1] = (arr[1][0] + arr[1][1]) % BOUND;
        tmp[0] = (arr[0][0] + 2*tmp[1]) % BOUND;

        arr[0][0] = arr[1][0];
        arr[1][0] = tmp[0];
        arr[1][1] = tmp[1];
    }
    printf("%d\n", arr[1][0]);
    return 0;
}
