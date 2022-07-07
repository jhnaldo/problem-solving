#include <stdio.h>

int main(){
    int time;
    int A, B, C;

    scanf("%d", &time);
    A = time/300;
    time %= 300;
    B = time/60;
    time %= 60;
    C = time/10;
    time %= 10;
    if (time) printf("-1\n");
    else printf("%d %d %d\n", A, B, C);
}
