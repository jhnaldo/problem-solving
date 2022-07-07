#include <stdio.h>

enum { UP, DOWN, LEFT, RIGHT };

int main(){
    int n, m, k = 1;
    char map[20][21];

    scanf("%d %d", &m, &n);
    while (n){
        int i, j, x, y;
        int direction;
        for (i = 0; i < n; i++)
            scanf("%s", map[i]);

        for (i = 1; i < n-1; i++){
            // left case
            if (map[i][0] == '*'){
                x = i;
                y = 0;
                direction = RIGHT;
            }
            // right case
            if (map[i][m-1] == '*'){
                x = i;
                y = m-1;
                direction = LEFT;
            }
        }
        for (j = 1; j < m-1; j++){
            // top case
            if (map[0][j] == '*'){
                x = 0;
                y = j;
                direction = DOWN;
            }
            // bottom case
            if (map[n-1][j] == '*'){
                x = n-1;
                y = j;
                direction = UP;
            }
        }

        while (map[x][y] != 'x'){
            switch(map[x][y]){
                case '/': direction = 3 - direction; break;
                case '\\': direction = (direction + 2) % 4; break;
            }
            switch(direction){
                case UP: x--; break;
                case DOWN: x++; break;
                case LEFT: y--; break;
                case RIGHT: y++; break;
            }
        }
        map[x][y] = '&';

        printf("HOUSE %d\n", k);
        for (i = 0; i < n; i++)
            printf ("%s\n", map[i]);
        scanf("%d %d", &n, &m);
        k++;
    }
    return 0;
}
