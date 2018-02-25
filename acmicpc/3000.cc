#include <stdio.h>

int main(){
    long long int n, i, count = 0;
    long long int x_count[100001] = {0,};
    long long int y_count[100001] = {0,};
    long long int x[100000], y[100000];

    scanf("%lld", &n);
    for (i = 0; i < n; i++){
        scanf("%lld %lld", &x[i], &y[i]);
        x_count[x[i]]++;
        y_count[y[i]]++;
    }
    for (i = 0; i < n; i++){
        count += (x_count[x[i]]-1)*(y_count[y[i]]-1);
    }
    printf("%lld\n", count);
    return 0;
}
