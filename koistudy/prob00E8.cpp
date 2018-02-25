#include <stdio.h>

int main(){
    int day, check;
    scanf("%d-%d", &day, &check);
    printf("%d%02d/%02d/%02d %c\n", 19+(check/1000000 >= 3), day/10000, day%10000/100, day%100, ((check/1000000 == 1 || check/1000000 == 3)?'M':'F'));
    return 0;
}
