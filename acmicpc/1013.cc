#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i, cur = 1;
        char str[201];
        int map[10][2] = {
            {0, 0},
            {2, 4},
            {0, 3},
            {2, 4},
            {5, 0},
            {6, 0},
            {6, 7},
            {2, 8},
            {9, 8},
            {6, 3}
        };
        scanf("%s", str);
        for (i = 0; str[i]; i++)
            cur = map[cur][str[i]-'0'];
        printf("%s\n", (cur == 3 || cur == 7 || cur == 8)? "YES": "NO");
    }
    return 0;
}
