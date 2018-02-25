#include <stdio.h>

int main(){
    long long int n;
    while(scanf("%lld", &n) != EOF){
        bool arr[10] = {0,};
        int count = 0;
        long long int k;

        for (k = 0; count < 10;){
            long long int kn = (++k)*n;
            while(kn){
                if (!arr[kn%10]){
                    arr[kn%10] = true;
                    count++;
                }
                kn /= 10;
            }
        }
        printf("%lld\n", k);
    }
    return 0;
}
