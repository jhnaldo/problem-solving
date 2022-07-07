#include <stdio.h>

int main(){
    long long int n, m;
    int count;
    scanf("%lld %lld", &n, &m);
    for (count = 0; n || m; n/=10, m/=10){
        if (n%10 == m%10){
            if (n%10 == 8){
                count++;
            }
        }else{
            count = 0;
        }
    }
    printf("%d\n", count);
    return 0;
}
