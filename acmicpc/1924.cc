#include <stdio.h>

int main(){
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int m, d, sum = 0;
    char day[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    scanf("%d %d", &m, &d);
    for (i = 0; i < m-1; i++)
        sum += month[i];
    sum += d;
    printf("%s\n", day[sum%7]);
    return 0;
}
