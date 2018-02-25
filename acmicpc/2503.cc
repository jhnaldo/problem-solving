#include <stdio.h>

bool check(int x, int k, int strike, int ball){
    int a = x/100, b = x/10%10, c = x%10;
    int d = k/100, e = k/10%10, f = k%10;

    if (!b || !c || a == b || b == c || a == c) return false;
    if (a == d) strike--;
    if (a == e || a == f) ball--;
    if (b == e) strike--;
    if (b == d || b == f) ball--;
    if (c == f) strike--;
    if (c == d || c == e) ball--;

    return (strike == 0 && ball == 0);
}

int main(){
    int n;
    int arr[100], strike[100], ball[100];
    int i, j, count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%d %d %d", &arr[i], &strike[i], &ball[i]);

    for (i = 123; i <= 987; i++){
        for (j = 0; j < n; j++){
            if (!check(i, arr[j], strike[j], ball[j]))
                break;
        }
        if (j == n) count++;
    }
    printf ("%d\n", count);
    return 0;
}
