#include <stdio.h>

int main(){
    int i, j, zi, zj;
    int r, c, zr, zc;
    char str[50][51];
    scanf("%d %d %d %d", &r, &c, &zr, &zc);
    for (i = 0; i < r; i++)
        scanf("%s", str[i]);

    for (i = 0; i < r; i++){
        for (zi = 0; zi < zr; zi++){
            for (j = 0; j < c; j++){
                for (zj = 0; zj < zc; zj++)
                    printf("%c", str[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
