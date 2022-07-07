#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int n, k, i, j;
    int arr[50], cur = 0, count = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) arr[i] = i+1;
    for (i = 0; i < k; i++){
        int num, left, right;
        scanf("%d", &num);
        left = right = 0;
        for (j = cur; arr[j] != num; j = (j+n-1)%n){
            if (arr[j]) left++;
        }
        for (j = cur; arr[j] != num; j = (j+1)%n){
            if (arr[j]) right++;
        }
        count += MIN(left, right);
        cur = j;
        arr[cur] = 0;
        for (; i < n-1 && !arr[cur]; cur = (cur+1)%n);
    }
    printf("%d\n", count);
    return 0;
}
