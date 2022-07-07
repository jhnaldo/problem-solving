#include <stdio.h>

#define ABS(a) ((a)<0?-(a):(a))

int main(){
    int a, b, n;
    int min;
    bool check = false;

    scanf("%d %d", &a, &b);
    scanf("%d", &n);

    min = ABS(a-b);
    for (int i = 0; i < n; i++){
        int favor, diff;
        scanf("%d", &favor);
        diff = ABS(b-favor);
        if (diff < min){
            check = true;
            min = diff;
        }
    }

    printf("%d\n", min+(check?1:0));

    return 0;
}
