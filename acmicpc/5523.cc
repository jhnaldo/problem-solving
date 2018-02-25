#include <stdio.h>

int main(){
    int n, a, b, i;
    a = b = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int a_score, b_score;
        scanf("%d %d", &a_score, &b_score);
        if (a_score > b_score) a++;
        if (a_score < b_score) b++;
    }
    printf("%d %d\n", a, b);
    return 0;
}
