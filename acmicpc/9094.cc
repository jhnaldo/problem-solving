#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m, a, b, count = 0;
        scanf("%d %d", &n, &m);
        for (a = 1; a < n; a++){
            for (b = a+1; b < n; b++){
                int ja = a*a + b*b + m;
                int mo = a*b;
                if (ja % mo == 0)
                    count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
