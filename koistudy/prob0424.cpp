#include <stdio.h>

void fill(int map[100][100], int n, int m, int x0, int y0, int from, int to){
    int x_stack[10000], y_stack[10000];
    int size;

    size = 1;
    x_stack[0] = x0;
    y_stack[0] = y0;
    map[x0][y0] = to;
    while (size--){
        int x = x_stack[size];
        int y = y_stack[size];

        if (x > 0   && map[x-1][y] == from) { map[x-1][y] = to; x_stack[size] = x-1; y_stack[size] = y; size++; }
        if (x < n-1 && map[x+1][y] == from) { map[x+1][y] = to; x_stack[size] = x+1; y_stack[size] = y; size++; }
        if (y > 0   && map[x][y-1] == from) { map[x][y-1] = to; x_stack[size] = x; y_stack[size] = y-1; size++; }
        if (y < m-1 && map[x][y+1] == from) { map[x][y+1] = to; x_stack[size] = x; y_stack[size] = y+1; size++; }
    }
}

int main(){
    int n, m;
    int map[100][100];
    int on, off;
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++)
            scanf("%d", &map[i][j]);
    }

    on = off = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (map[i][j] == 0){
                off++;
                fill(map, n, m, i, j, 0, -1);
            }else if (map[i][j] == 1){
                on++;
                fill(map, n, m, i, j, 1, -1);
            }
        }
    }
    printf("%d\n%d\n", off, on);

    return 0;
}
