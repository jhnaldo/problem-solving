#include <stdio.h>

void checking(int edge[100][100], int esize[100], bool check[100], int k){
    if (!check[k]){
        int i;
        check[k] = true;
        for (i = 0; i < esize[k]; i++){
            checking(edge, esize, check, edge[k][i]);
        }
    }
}


int main(){
    int n, k;
    int edge[100][100];
    int esize[100] = {};
    bool check[100] = {};
    int i, j, before;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++){
        int from, to;
        scanf("%d %d", &from, &to);
        from--; to--;
        edge[from][esize[from]++] = to;
        edge[to][esize[to]++] = from;
    }

    printf("%d\n", (n - 1) - k);
    before = 0;
    checking(edge, esize, check, 0);
    for (i = 0; i < n; i++){
        if (!check[i]){
            printf("%d %d\n", before+1, i+1);
            checking(edge, esize, check, i);
            before = i;
        }
    }
    return 0;
}
