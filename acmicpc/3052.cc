#include <stdio.h>

int main(){
    bool check[42] = {0,};
    int num, i, count = 0;

    for (i = 0; i < 10; i++){
        scanf("%d", &num);
        check[num%42] = true;
    }
    for (i = 0; i < 42; i++){
        if(check[i])
            count++;
    }
    printf("%d\n", count);
    return 0;
}
