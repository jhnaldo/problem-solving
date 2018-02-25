#include <stdio.h>

const int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool yun(int y){
    return ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)));
}

int getDays(int y, int m){
    if (m == 2 && yun(y)) return 29;
    else return days[m];
}

int main(){
    int y, m, d;
    int days;
    scanf("%d %d %d", &y, &m, &d);
    days = getDays(y, m) + (m == 12? getDays(y+1, 1): getDays(y, m+1)) - d + 1;
    m += 2;
    if (m > 12){
        y++;
        m -= 12;
    }
    if (days % 7){
        d = 8 - days % 7;
    }else{
        d = 1;
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}
