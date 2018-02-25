#include <stdio.h>

int main(){
    int i, x, y;
    int n, m, result = 0;
    int count[101][101] = {0,};
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        int from_x, from_y, to_x, to_y;
        scanf("%d %d %d %d", &from_x, &from_y, &to_x, &to_y);
        for (x = from_x; x <= to_x; x++){
            for (y = from_y; y <= to_y; y++)
                count[x][y]++;
        }
    }
    for (x = 1; x <= 100; x++){
        for (y = 1; y <= 100; y++){
            if (count[x][y] > m)
                result++;
        }
    }
    printf("%d\n", result);
    return 0;
}
