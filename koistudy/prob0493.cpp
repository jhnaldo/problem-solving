#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int i;
    int before, cur;
    int count, max;
    scanf("%d %d", &cur, &n);
    scanf("%d", &before);
    count = max = 1;
    for (i = 1; i < n; i++){
        scanf("%d", &cur);
        if (cur == before){
            count++;
            if (max < count) max = count;
        }else{
            count = 1;
        }
        before = cur;
    }
    printf("%d\n", max);
    return 0;
}
