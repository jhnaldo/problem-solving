#include <stdio.h>
#include <string.h>

bool less(int l_year, int l_month, int l_day, int r_year, int r_month, int r_day){
    if (l_year > r_year) return true;
    if (l_year < r_year) return false;
    if (l_month > r_month) return true;
    if (l_month < r_month) return false;
    if (l_day > r_day) return true;
    if (l_day < r_day) return false;
    return true;
}

int main(){
    int n;
    char name[16], min_name[16], max_name[16];
    int day, month, year;
    int min_day, min_month, min_year;
    int max_day, max_month, max_year;

    scanf("%d", &n);
    scanf("%s %d %d %d", name, &day, &month, &year);
    strcpy(min_name, name); strcpy(max_name, name);
    min_day = max_day = day;
    min_month = max_month = month;
    min_year = max_year = year;
    for (; n > 1; n--){
        scanf("%s %d %d %d", name, &day, &month, &year);
        if (less(year, month, day, min_year, min_month, min_day)){
            strcpy(min_name, name);
            min_year = year;
            min_month = month;
            min_day = day;
        }
        if (less(max_year, max_month, max_day, year, month, day)){
            strcpy(max_name, name);
            max_year = year;
            max_month = month;
            max_day = day;
        }
    }
    printf ("%s\n%s\n", min_name, max_name);
    return 0;
}
