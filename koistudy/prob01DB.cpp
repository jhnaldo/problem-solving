#include <stdio.h>
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(int*)left - *(int*)right;
}

int clear(bool map[30][30], int x0, int y0, int n){
    int xstack[900];
    int ystack[900];
    int size, count;

    map[x0][y0] = false;
    xstack[0] = x0;
    ystack[0] = y0;
    size = 1;
    count = 1;
    while (size){
        int x = xstack[size-1];
        int y = ystack[size-1];
        size--;

        if (x >   0 && map[x-1][y]) { map[x-1][y] = false; xstack[size] = x-1; ystack[size] = y; size++; count++; }
        if (x < n-1 && map[x+1][y]) { map[x+1][y] = false; xstack[size] = x+1; ystack[size] = y; size++; count++; }
        if (y >   0 && map[x][y-1]) { map[x][y-1] = false; xstack[size] = x; ystack[size] = y-1; size++; count++; }
        if (y < n-1 && map[x][y+1]) { map[x][y+1] = false; xstack[size] = x; ystack[size] = y+1; size++; count++; }
    }
    return count;
}

int main(){
    int n;
    char str[31];
    bool map[30][30];
    int arr[1000];
    int size = 0;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s", str);
        for (j = 0; j < n; j++)
            map[i][j] = (str[j] == '1');
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (map[i][j])
                arr[size++] = clear(map, i, j, n);
        }
    }

    qsort(arr, size, sizeof(int), comp);

    printf("%d\n", size);
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);

    return 0;
}
