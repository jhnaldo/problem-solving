#include <stdio.h>

int rev (int k){
    int res = 0;
    while(k){
        res *= 10;
        res += k%10;
        k /= 10;
    }
    return res;
}

int main(){
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", rev(rev(x)+rev(y)));
    return 0;
}
