#include <stdio.h>

int main(){
    int n, i, p, q;
    int arr[101][101] = {0,};
    int count[100] = {0,};
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int x, y, w, h;
        scanf("%d %d %d %d", &x, &y, &w, &h);
        for (p = 0; p < w; p++){
            for (q = 0; q < h; q++){
                arr[x+p][y+q] = i+1;
            }
        }
    }

    for (p = 0; p <= 100; p++){
        for (q = 0; q <= 100; q++){
            if (arr[p][q]) count[arr[p][q]-1]++;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d\n", count[i]);
    return 0;
}
