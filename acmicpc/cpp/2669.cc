#include <stdio.h>

int main(){
    int from_x[4], from_y[4], to_x[4], to_y[4];
    int map[100][100] = {0,}, sum = 0;
    int i, x, y;
    for (i = 0; i < 4; i++){
        scanf("%d %d %d %d", &from_x[i], &from_y[i], &to_x[i], &to_y[i]);
        for (x = from_x[i]; x < to_x[i]; x++){
            for (y = from_y[i]; y < to_y[i]; y++) map[x][y] = 1;
        }
    }
    for (x = 0; x < 100; x++){
        for (y = 0; y < 100; y++) if (map[x][y]) sum++;
    }
    printf("%d\n", sum);
    return 0;
}
