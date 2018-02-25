#include <stdio.h>

int main(){
    int n;
    int score1, score2;

    score1 = score2 = 100;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if (a>b) score2 -= a;
        if (b>a) score1 -= b;
    }
    printf("%d\n%d\n", score1, score2);
    return 0;
}
