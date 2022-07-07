#include <stdio.h>

int cal(int k){
    int s, i;
    int sum = 0;
    for (s = 1, i = 1; s <= k; i++, s += i)
        sum += i*i;
    return sum + (k-s+i)*i;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", cal(b)-cal(a-1));
    return 0;
}
