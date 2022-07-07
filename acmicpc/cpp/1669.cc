#include <stdio.h>
#include <math.h>

int main(){
    int x, y;
    int diff, k;

    scanf("%d %d", &x, &y);
    diff = y-x;
    k = sqrt(diff);
    if (!diff){
        printf("0\n");
    }else if (diff <= k*k){
        printf("%d\n", 2*k-1);
    }else if (diff <= k*(k+1)){
        printf("%d\n", 2*k);
    }else{
        printf("%d\n", 2*k+1);
    }

    return 0;
}
