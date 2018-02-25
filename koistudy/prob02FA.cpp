#include <stdio.h>

int count(int n){
    return (n / 4) - (n / 100) + (n / 400);
}

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int from, to;
    scanf("%d %d", &from, &to);
    if (from > to) swap(from, to);
    printf("%d\n", count(to) - count(from-1));
    return 0;
}
