#include <stdio.h>

void remove(char map[100][101], int h, int w, int origin_x, int origin_y){
    int x_stack[100000];
    int y_stack[100000];
    int size;

    x_stack[0] = origin_x;
    y_stack[0] = origin_y;
    size = 1;
    while (size){
        int x = x_stack[size-1];
        int y = y_stack[size-1];
        size--;

        if (x >=0 && x < h && y >= 0 && y < w && map[x][y] == '#'){
            map[x][y] = '.';
            x_stack[size+0] = x-1;
            y_stack[size+0] = y;
            x_stack[size+1] = x+1;
            y_stack[size+1] = y;
            x_stack[size+2] = x;
            y_stack[size+2] = y-1;
            x_stack[size+3] = x;
            y_stack[size+3] = y+1;
            size += 4;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int h, w, i, j, count = 0;
        char map[100][101];

        scanf("%d %d", &h, &w);
        for (i = 0; i < h; i++)
            scanf("%s", map[i]);

        for (i = 0; i < h; i++){
            for (j = 0; j < w; j++){
                if (map[i][j]=='#'){
                    count++;
                    remove(map, h, w, i, j);
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
