#include <stdio.h>

int main(){
    int t;
    int sum = 0;
    scanf("%d", &t);
    while(t--){
        int h, m, d;
        scanf("%d:%d %d", &h, &m, &d);
        for (; d > 0; d--){
            if (h >=7 && h <= 18) sum += 10;
            else sum += 5;
            m++;
            if (m == 60) { m = 0; h++; }
            if (h == 24) { h = 0; }
        }
    }
    printf("%d\n", sum);
    return 0;
}
