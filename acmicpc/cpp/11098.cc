#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int k, price;
        char name[21];

        scanf("%d", &k);
        scanf("%d %s", &price, name);
        while (--k){
            int p;
            char tmp[21];
            scanf("%d", &p);
            if (price < p){
                price = p;
                scanf("%s", name);
            }else{
                scanf("%s", tmp);
            }
        }
        printf("%s\n", name);
    }
    return 0;
}
