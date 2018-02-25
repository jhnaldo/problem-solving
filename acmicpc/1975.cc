#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i, count = 0;
        scanf("%d", &n);
        for (i = 2; i <= n; i++){
            int tmp = n;
            while (tmp%i==0){
                count++;
                tmp /= i;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
