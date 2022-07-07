#include <stdio.h>

bool equal(char x, char y, bool rg){
    if (x == y) return true;
    if (rg && x == 'R' && y == 'G') return true;
    if (rg && x == 'G' && y == 'R') return true;
    return false;
}

void paint(int n, char map[100][101], bool check[100][100], int x, int y, char ch, bool rg){
    if (x >= 0 && x < n && y >= 0 && y < n && !check[x][y] && equal(map[x][y], ch, rg)){
        check[x][y] = 1;
        paint(n, map, check, x+1, y, ch, rg);
        paint(n, map, check, x-1, y, ch, rg);
        paint(n, map, check, x, y+1, ch, rg);
        paint(n, map, check, x, y-1, ch, rg);
    }
}

int count_map(int n, char map[100][101], bool rg){
    int count = 0, i, j;
    bool check[100][100] = {0,};
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (!check[i][j]){
                paint(n, map, check, i, j, map[i][j], rg);
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n, i, j;
    char map[100][101] = {0,};

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", map[i]);

    printf("%d %d\n", count_map(n, map, false), count_map(n, map, true));

    return 0;
}
