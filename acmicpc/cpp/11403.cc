#include <stdio.h>

void find(int n, int adj[100][100], int to, bool result[100]){
    int i;

    if (result[to]) return;
    result[to] = true;
    for (i = 0; i < n; i++){
        if (adj[to][i])
            find(n, adj, i, result);
    }
}

int main(){
    int n;
    int adj[100][100];
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);
    }

    for (i = 0; i < n; i++){
        bool result[100] = {};
        for (j = 0; j < n; j++){
            if (adj[i][j])
                find(n, adj, j, result);
        }
        for (j = 0; j < n; j++)
            printf("%d ", (int)result[j]);
        printf("\n");
    }
    return 0;
}
