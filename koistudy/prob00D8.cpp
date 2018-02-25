#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    while (k--){
        int a, b, c, m;
        scanf("%d %d %d", &a, &b, &c);
        m = (n-1) / a + 1;
        printf("%d\n", m/b*(b+c) + (m%b? m%b: -c));
    }
    return 0;
}
