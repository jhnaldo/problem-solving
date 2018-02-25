#include <stdio.h>

int main(){
    int n, i;
    int hour, min;
    double base_tz;
    scanf("%d", &n);
    scanf("\n%d:%d UTC%lf", &hour, &min, &base_tz);
    for (i = 0; i < n; i++){
        double tz;
        int new_hour, new_min;
        scanf("\nUTC%lf", &tz);
        tz -= base_tz;
        new_hour = hour + (tz+24);
        new_min = min;
        if (tz != (int)tz){
            new_min += 30;
            new_hour += new_min/60;
            new_min %= 60;
        }
        new_hour %= 24;
        printf("%02d:%02d\n", new_hour, new_min);
    }
}
