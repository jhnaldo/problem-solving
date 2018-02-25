#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int left[10000], right[10000];
    int lsize, rsize, i, j;
    int lsum, rsum, sum;

    scanf("%d", &lsize);
    while (lsize){
        for (i = 0; i < lsize; i++) scanf("%d", &left[i]);
        left[lsize++] = 10001;
        scanf("%d", &rsize);
        for (j = 0; j < rsize; j++) scanf("%d", &right[j]);
        right[rsize++] = 10001;

        sum = lsum = rsum = 0;
        for (i = 0, j = 0; i < lsize && j < rsize;){
            if (left[i] < right[j]) lsum += left[i++];
            else if (left[i] > right[j]) rsum += right[j++];
            else{
                sum += MAX(lsum, rsum);
                lsum = rsum = left[i];
                i++; j++;
            }
        }

        printf("%d\n", sum);
        scanf("%d", &lsize);
    }
    return 0;
}
