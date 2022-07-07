#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, min = 0, sum = 0;
        scanf("%d", &n);
        while(n--){
            int in, out;
            scanf("%d %d", &in, &out);
            sum += out-in;
            if (sum > min) min = sum;
        }
        printf("%d\n", min);
    }
    return 0;
}
