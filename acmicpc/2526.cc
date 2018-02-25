#include <stdio.h>

int main(){
    int n, m, i;
    int arr[97] = {0,};
    int cur = 1;

    scanf("%d %d", &n, &m);
    if (n < m) arr[n] = cur++;
    for (i = n*n % m; !arr[i]; arr[i] = cur++, i = i*n % m);
    printf("%d\n", cur-arr[i]);
}
