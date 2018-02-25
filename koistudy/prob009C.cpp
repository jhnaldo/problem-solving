#include <stdio.h>

void hanoi(int n, int from, int other, int to){
    if (n == 1){
        printf("move disk 1 %c->%c\n", from+'A', to+'A');
    }else{
        hanoi(n-1, from, to, other);
        printf("move disk %d %c->%c\n", n, from+'A', to+'A');
        hanoi(n-1, other, from, to);
    }
}

int main(){
    int n, k;
    scanf("%d", &n);
    printf("%d\n", (1 << n) - 1);
    hanoi(n, 0, 1, 2);
    return 0;
}
