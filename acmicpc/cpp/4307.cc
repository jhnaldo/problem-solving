#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int size, n, i;
        int min, max;
        min = max = 0;
        scanf("%d %d", &size, &n);
        for (i = 0; i < n; i++){
            int k;
            scanf("%d", &k);
            min = MAX(min, MIN(k, size-k));
            max = MAX(max, MAX(k, size-k));
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}
