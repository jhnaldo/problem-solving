#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

int n;
int **edge;
bool *check;

bool aug_path(int k){
    int i;
    if (k == n-1) return true;
    for (i = 0; i < n; i++){
        if (!check[i] && edge[k][i]){
            check[i] = true;
            edge[k][i] = false;
            edge[i][k] = true;

            if(aug_path(i)) return true;

            check[i] = false;
            edge[k][i] = true;
            edge[i][k] = false;
        }
    }

    return false;
}

int main(){
    int max;
    int i, j;

    scanf("%d", &n);
    edge = new int*[4*n];
    for (i = 0; i < 4*n; i++)
        edge[i] = new int[4*n]();
    for (i = 1; i <= 2*n-1; i++){
        edge[0][i] = true;
        edge[2*n-1+i][4*n-1] = true;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            int possible;
            scanf("%d", &possible);
            if (possible)
                edge[(i-j)+n][(i+j)+2*n] = true;
        }
    }

    n = 4*n;
    check = new bool[n]();
    check[0] = true;
    max = 0;
    while (aug_path(0)){
        max++;
        delete[] check;
        check = new bool[n]();
        check[0] = true;
    }
    printf("%d\n", max);

    delete[] check;
    for (i = 0; i < n; i++)
        delete[] edge[i];
    delete[] edge;

    return 0;
}
