#include <stdio.h>

int main(){
    int n, j;
    scanf("%d", &n);
    for (j = 0; j < n; j++){
        int k, i;
        bool check = true;
        for (i = 0; i < 10; i++){
            scanf("%d", &k);
            if ((i%5)+1 != k) check = false;
        }
        if (check) printf("%d\n", j+1);
    }
    return 0;
}
