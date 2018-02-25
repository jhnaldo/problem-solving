#include <stdio.h>

int main(){
    int t;
    int price, n, q, p;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d", &price);
        scanf("%d", &n);
        for (; n > 0; n--){
            scanf("%d %d", &q, &p);
            price += q*p;
        }
        printf("%d\n", price);
    }
    return 0;
}
