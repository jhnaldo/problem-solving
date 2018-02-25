#include <stdio.h>

void draw_dot(char map[5][243], int x, int y, int n){
    if (n){
        map[x][y] = '.';
        draw_dot(map, x, y + 1, n - 1);
    }
}

void draw_star(char map[5][243], int x, int y, int n){
    if (n){
        map[x][y] = '*';
        draw_star(map, x + 1, y, n - 1);
    }
}

int paint(char map[5][243], int x, int y, int n){
    if (n == 1){
        map[x][y] = '*';
        map[x][y + 1] = '*';
        return 2;
    }else{
        int k = paint(map, x + 1, y, n-1);
        paint(map, x + 1, y + k + 1, n-1);
        paint(map, x + 1, y + 2 * k + 2, n-1);
        draw_dot(map, x, y, 3 * k + 2);
        draw_star(map, x, y + k, n);
        draw_star(map, x, y + 2 * k + 1, n);
        return 3 * k + 2;
    }
}

void print(char map[5][243], int i, int n){
    if (i < n){
        printf("%s\n", map[i]);
        print(map, i+1, n);
    }
}

int main(){
    int n;
    char map[5][243] = {};
    scanf("%d", &n);
    paint(map, 0, 0, n);
    print(map, 0, n);
    return 0;
}
