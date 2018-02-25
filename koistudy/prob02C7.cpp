#include <stdio.h>

void combination(int min[], int cur[], int n, int k, int idx, int i, int from){
    if (k == i){
        int j;
        int tmp = idx;
        bool check = false;
        for (j = 0; tmp; j++){
            if (tmp % 2){
                int value = min[idx - (1 << j)] + cur[j];
                if (!check || min[idx] > value){
                    min[idx] = value;
                    check = true;
                }
            }
            tmp /= 2;
        }
    }else{
        for (; from < n; from++)
            combination(min, cur, n, k, idx + (1 << from), i+1, from+1);
    }
}

int main(){
    int n;
    int *min, cur[20];
    int i, j;

    scanf("%d", &n);
    min = new int[1 << n]();
    for (i = 1, j = 0; j < n; j++, i <<= 1)
        scanf("%d", &min[i]);
    for (i = 1; i < n; i++){
        for (j = 0; j < n; j++)
            scanf("%d", &cur[j]);
        combination(min, cur, n, i+1, 0, 0, 0);
    }
    printf("%d\n", min[(1 << n) - 1]);
    delete[] min;
    return 0;
}
