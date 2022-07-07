#include <stdio.h>

int next(int k){
    int result = k;
    while(k){
        result += k%10;
        k /= 10;
    }
    return result;
}

int main(){
    int i;
    bool check[10001] = {0,};
    for (i = 1; i <= 10000; i++){
        int value = next(i);
        if (value <= 10000) check[value] = true;
    }
    for (i = 1; i <= 10000; i++){
        if (!check[i]) printf("%d\n", i);
    }
    return 0;
}
