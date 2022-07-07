#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, sum = 0;
        scanf("%d", &n);
        while(n--){
            int k;
            scanf("%d", &k);
            sum += k;
        }
        printf("%s\n", (sum < 0?"Left":(sum > 0?"Right":"Equilibrium")));
    }
    return 0;
}
