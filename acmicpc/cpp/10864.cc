#include <stdio.h>

int main(){
    int n, m, i;
    int count[1000] = {0,};
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        count[a-1]++;
        count[b-1]++;
    }
    for (i = 0; i < n; i++){
        printf("%d\n", count[i]);
    }
    return 0;
}
