#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int parity, n;
        int i, count = 0;
        scanf("%d %d", &parity, &n);
        for (i = 0; i < n*n; i++){
            int value;
            scanf("%d", &value);
            if (value) count++;
        }
        printf("%s\n", (count%2 == parity? "pass": "fail"));
    }
    return 0;
}
