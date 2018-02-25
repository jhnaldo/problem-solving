#include <stdio.h>
#include <stdlib.h>

int comp(const void *left, const void *right){
    return *(int*)left - *(int*)right;
}

int main(){
    int n, m;
    int count[701] = {};
    int sum = 0, i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        count[k]++;
    }
    m = n-m;
    for (i = 1; i <= 700 && m; i++){
        if (count[i] < m){
            sum += count[i] * i;
            m -= count[i];
        }else{
            sum += m * i;
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
