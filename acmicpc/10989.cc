#include <stdio.h>

int main(){
    int n, i;
    int count[10000] = {0,};
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        count[k-1]++;
    }
    for (i = 0; i < 10000; i ++){
        if (count[i]){
            int j;
            for (j = 0; j < count[i]; j++) printf("%d\n", i+1);
        }
    }
    return 0;
}
