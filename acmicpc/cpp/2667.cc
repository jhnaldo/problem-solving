#include <stdio.h>
#include <algorithm>

int check(char map[25][26], int n, int cur_x, int cur_y){
    int count = 1;
    int x_stack[700], y_stack[700], size;

    size = 1;
    x_stack[0] = cur_x;
    y_stack[0] = cur_y;
    map[cur_x][cur_y] = '0';
    while (size){
        --size;
        int x = x_stack[size];
        int y = y_stack[size];

        if (x > 0 && map[x-1][y] == '1') { count++; map[x-1][y] = '0'; x_stack[size] = x-1; y_stack[size] = y; size++; }
        if (y > 0 && map[x][y-1] == '1') { count++; map[x][y-1] = '0'; x_stack[size] = x; y_stack[size] = y-1; size++; }
        if (x < n-1 && map[x+1][y] == '1') { count++; map[x+1][y] = '0'; x_stack[size] = x+1; y_stack[size] = y; size++; }
        if (y < n-1 && map[x][y+1] == '1') { count++; map[x][y+1] = '0'; x_stack[size] = x; y_stack[size] = y+1; size++; }
    }
    return count;
}

int main(){
    int n, k;
    char map[25][26];
    int size[500];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", map[i]);

    k = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (map[i][j] == '1')
                size[k++] = check(map, n, i, j);
        }
    }

    std::sort(size, size+k);
    printf("%d\n", k);
    for (i = 0; i < k; i++)
        printf("%d\n", size[i]);
    return 0;
}
