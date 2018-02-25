#include <stdio.h>

int main(){
    int m, d, i;
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char day[7][10] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"};

    scanf("%d %d", &d, &m);
    for (i = 1; i < m; i++)
        d += month[i];
    printf("%s\n", day[(d+2)%7]);
    return 0;
}
