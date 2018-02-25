#include <stdio.h>

void draw_dot(char map[10][1025], int x, int y, int n){
    if (n){
        map[x][y] = '.';
        draw_dot(map, x, y + 1, n - 1);
    }
}

void draw_star(char map[10][1025], int x, int y, int n){
    if (n){
        map[x][y] = '*';
        draw_star(map, x + 1, y, n - 1);
    }
}

int paint(char map[10][1025], int x, int y, int n){
    if (n == 1){
        map[x][y] = '*';
        return 1;
    }else{
        int k = paint(map, x + 1, y, n-1);
        paint(map, x + 1, y + k + 1, n-1);
        draw_dot(map, x, y, 2 * k + 1);
        draw_star(map, x, y + k, n);
        return 2 * k + 1;
    }
}

void print(char map[10][1025], int i, int n){
    if (i < n){
        printf("%s\n", map[i]);
        print(map, i+1, n);
    }
}

int main(){
    int n;
    char map[10][1025] = {};
    scanf("%d", &n);
    paint(map, 0, 0, n);
    print(map, 0, n);
    return 0;
}
