#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, max;
        scanf("%d", &n);
        max = n;
        while (n != 1){
            if (n%2) n = n*3+1;
            else n /= 2;
            if (max < n) max = n;
        }
        printf("%d\n", max);
    }
    return 0;
}
