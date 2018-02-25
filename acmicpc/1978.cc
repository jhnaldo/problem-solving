#include <stdio.h>

int main(){
    int n, count = 0;
    scanf("%d", &n);
    while (n--){
        int k, i, c = 0;
        scanf("%d", &k);
        for (i = 1; i <= k; i++){
            if (k % i == 0)
                c++;
        }
        if (c == 2) count++;
    }
    printf("%d\n", count);
    return 0;
}
