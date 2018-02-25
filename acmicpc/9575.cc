#include <stdio.h>

void checking(int& count, bool check[], int num){
    int tmp = num;
    while (tmp){
        if (tmp%10 != 8 && tmp%10 != 5)
            return;
        tmp /= 10;
    }
    if (!check[num]){
        check[num] = true;
        count++;
    }
}

int main(){
    int t;
    int p, q, r, count;
    int i, j, k;
    int a[50], b[50], c[50];

    scanf("%d", &t);
    for (; t > 0; t--){
        bool check[90001] = {0,};
        scanf("%d", &p);
        for (i = 0; i < p; i++) scanf("%d", &a[i]);
        scanf("%d", &q);
        for (j = 0; j < q; j++) scanf("%d", &b[j]);
        scanf("%d", &r);
        for (k = 0; k < r; k++) scanf("%d", &c[k]);

        count = 0;
        for (i = 0; i < p; i++){
            for (j = 0; j < q; j++){
                for (k = 0; k < r; k++){
                    checking (count, check, a[i]+b[j]+c[k]);
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
