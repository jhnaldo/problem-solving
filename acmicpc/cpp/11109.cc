#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int d, n, s, p;
        int res;
        scanf("%d %d %d %d", &d, &n, &s, &p);
        res = n*s - (d + n*p);
        printf("%s\n", (res<0?"do not parallelize":(res>0?"parallelize":"does not matter")));
    }
    return 0;
}
