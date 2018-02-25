#include <stdio.h>

int display(int n, int from, int to){
    printf("%d : %c->%c\n", n, from+'A', to+'A');
    return 1;
}

int hanoi(int n, int from, int to){
    int count = 0;
    if (n){
        if (from - to == 2 || to - from == 2){
            count += hanoi(n-1, from, to);
            count += display(n, from, 1);
            count += hanoi(n-1, to, from);
            count += display(n, 1, to);
            count += hanoi(n-1, from, to);
        }else{
            count += hanoi(n-1, from, 3 - from - to);
            count += display(n, from, to);
            count += hanoi(n-1, 3 - from - to, to);
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", hanoi(n, 0, 2));
    return 0;
}
