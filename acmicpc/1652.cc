#include <stdio.h>

int main(){
    int n, i, j, rcount, ccount;
    char map[100][101];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", map[i]);

    rcount = 0;
    for (i = 0; i < n; i++){
        int k = 0;
        for (j = 0; j < n; j++){
            if (map[i][j] == '.'){
                k++;
            }else{
                if (k >= 2) rcount++;
                k = 0;
            }
        }
        if (k >= 2) rcount++;
    }

    ccount = 0;
    for (j = 0; j < n; j++){
        int k = 0;
        for (i = 0; i < n; i++){
            if (map[i][j] == '.'){
                k++;
            }else{
                if (k >= 2) ccount++;
                k = 0;
            }
        }
        if (k >= 2) ccount++;
    }
    printf("%d %d\n", rcount, ccount);
    return 0;
}
