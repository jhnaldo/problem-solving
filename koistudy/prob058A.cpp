#include <stdio.h>

int main(){
    int i;
    bool check[30] = {};
    for (i = 0; i < 28; i++){
        int idx;
        scanf("%d", &idx);
        check[idx-1] = true;
    }
    for (i = 0; i < 30; i++){
        if (!check[i])
            printf("%d\n", i+1);
    }
    return 0;
}
