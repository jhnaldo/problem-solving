#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j;
    char origin[11];
    int origin_count[26] = {0,};
    int ans = 0;

    scanf("%d", &n);
    scanf("%s", origin);
    for (i = 0; origin[i]; i++)
        origin_count[origin[i]-'A']++;
    for (i = 1; i < n; i++){
        char str[11];
        int count[26] = {0,};
        bool minus, plus;
        minus = plus = true;

        scanf("%s", str);
        for (j = 0; str[j]; j++)
            count[str[j]-'A']++;
        for (j = 0; j < 26; j++){
            if (minus && count[j] == origin_count[j]-1){
                minus = false;
            }else if (plus && count[j] == origin_count[j]+1){
                plus = false;
            }else if(count[j] != origin_count[j]){
                break;
            }
        }
        if (j == 26) ans++;
    }
    printf ("%d\n", ans);
    return 0;
}
