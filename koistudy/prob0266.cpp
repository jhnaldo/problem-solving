#include <stdio.h>

int main(){
    int n, p;
    int cur;
    int *arr;
    int i;
    scanf("%d %d", &n, &p);
    arr = new int[p]();

    for (i = 1, cur = (n * n) % p; arr[cur] == 0; cur *= n, cur %= p, i++) arr[cur] = i;
    printf("%d\n", i - arr[cur]);

    delete[] arr;
    return 0;
}
