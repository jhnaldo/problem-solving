#include <stdio.h>

int main(){
    int a[10], b[10], i;
    int asum, bsum, last;
    asum = bsum = last = 0;
    for (i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++){
        scanf("%d", &b[i]);
        if (a[i] > b[i]){
            asum += 3;
            last = 1;
        }else if (a[i] < b[i]){
            bsum += 3;
            last = 2;
        }else{
            asum++;
            bsum++;
        }
    }
    printf ("%d %d\n", asum, bsum);
    if (asum > bsum){
        printf("A\n");
    }else if (asum < bsum){
        printf("B\n");
    }else{
        printf("%c\n", (last==1?'A':(last==2?'B':'D')));
    }
    return 0;
}
