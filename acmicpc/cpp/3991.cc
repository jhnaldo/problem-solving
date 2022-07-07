#include <stdio.h>

int main(){
    int h, w, c, i, j, cursor = 0;
    int map[10][10] = {0,};
    scanf("%d %d %d", &h, &w, &c);
    for (i = 0; i < c; i++){
        int count;
        scanf("%d", &count);
        for (j = 0; j < count; j++, cursor++){
            if ((cursor/w)%2) map[cursor/w][w-1-cursor%w] = i+1;
            else map[cursor/w][cursor%w] = i+1;
        }
    }
    for (i = 0; i < h; i++){
        for (j = 0; j < w; j++){
            printf("%d", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
