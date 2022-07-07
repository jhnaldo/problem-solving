#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int main(){
    int n, i;
    char str[101];
    char a[4] = "ABC", b[5] = "BABC", c[7] = "CCAABB";
    int adrian, bruno, goran, max;

    scanf("%d\n%s", &n, str);
    adrian = bruno = goran = 0;
    for (i = 0; i < n; i++){
        if (str[i] == a[i%3]) adrian++;
        if (str[i] == b[i%4]) bruno++;
        if (str[i] == c[i%6]) goran++;
    }
    max = MAX(adrian, MAX(bruno, goran));
    printf("%d\n", max);
    if (adrian == max) printf("Adrian\n");
    if (bruno == max) printf("Bruno\n");
    if (goran == max) printf("Goran\n");
}
