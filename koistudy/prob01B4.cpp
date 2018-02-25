#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a, b, i;
    scanf("%d %d", &a, &b);
    if (a > b) swap(a, b);
    for (i = 1; i <= b/2; i++){
        if (a % i == 0 || b % i == 0)
            printf("%d ", i);
    }
    if (a > b/2) printf("%d ", a);
    printf("%d\n", b);
    return 0;
}
