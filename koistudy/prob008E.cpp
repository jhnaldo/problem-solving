#include <stdio.h>

int main(){
    int n, k, i, ans = -1;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++){
        int m;
        scanf("%d", &m);
        if (m == k) ans = i+1;
    }
    printf("%d\n", ans);

    return 0;
}
