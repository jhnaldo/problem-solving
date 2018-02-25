#include <stdio.h>

int main(){
    int sum, sub;
    scanf("%d %d", &sum, &sub);
    if (sum < sub || (sum+sub)%2){
        printf("-1\n");
    }else{
        printf("%d %d\n", (sum+sub)/2, (sum-sub)/2);
    }
    return 0;
}
