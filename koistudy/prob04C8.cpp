#include <stdio.h>

int main(){
    int n, m;
    char *str;
    int **map;
    int i, j;

    scanf("%d %d", &n, &m);
    map = new int*[n];
    for (i = 0; i < n; i++)
        map[i] = new int[m];
    str = new char[m+1];

    for (i = 0; i < n; i++){
        scanf("%s", str);
        for (j = 0; j < m; j++)
            map[i][j] = str[j]-'0';
    }

    for (j = 0; j < m; j++){
        for (i = 1; i < n; i++){
            if (map[i-1][j] && map[i][j])
                map[i][j] = map[i-1][j] + 1;
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }

    delete[] str;
    for (i = 0; i < n; i++)
        delete[] map[i];
    delete[] map;
    return 0;
}
