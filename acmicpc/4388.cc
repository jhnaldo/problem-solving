#include <stdio.h>

int main(){
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    while(n || m){
        int count = 0, before = 0;
        for (; n || m; n /= 10, m /= 10){
            if (n%10 + m%10 + before >= 10){
                before = 1;
                count++;
            }else{
                before = 0;
            }
        }
        printf("%d\n", count);
        scanf("%lld %lld", &n, &m);
    }
    return 0;
}
