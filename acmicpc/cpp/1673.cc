#include <stdio.h>

int main(){
    int n, k, count;

    while (scanf("%d %d", &n, &k) != EOF){
        count = n;
        while (count >= k){
            n += count / k;
            count = (count % k) + (count / k);
        }
        printf("%d\n", n);
    }
    return 0;
}
