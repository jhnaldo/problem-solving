#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int sum = 0, min = 0;
        int i;
        for (i = 0; i < 7; i++){
            int k;
            scanf("%d", &k);
            if (k%2==0){
                sum += k;
                min = (min?MIN(min, k):k);
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}
