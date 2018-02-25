#include <stdio.h>

int main(){
    int n, m;
    int i;
    int **edge, *esize;
    int *fstack, *tstack, ssize;
    bool *check;

    scanf("%d %d", &n, &m);

    edge = new int*[n];
    for (i = 0; i < n; i++) edge[i] = new int[n]();
    esize = new int[n]();

    fstack = new int[n];
    tstack = new int[n];
    ssize = 0;

    check = new bool[n]();

    for (i = 0; i < m; i++){
        int from, to;
        scanf("%d %d", &from, &to);
        from--;
        to--;
        edge[from][esize[from]++] = to;
        edge[to][esize[to]++] = from;
    }

    fstack[ssize] = 0;
    tstack[ssize++] = 0;
    while (ssize){
        int cur = fstack[--ssize];
        int idx = tstack[ssize];

        if (idx == esize[cur]) continue;

        if (idx == 0) {
            check[cur] = true;
            printf("%d ", cur + 1);
        }

        while (idx < esize[cur] && check[edge[cur][idx]]) idx++;
        if (idx < esize[cur]){
            fstack[ssize] = cur;
            tstack[ssize++] = idx + 1;
            fstack[ssize] = edge[cur][idx];
            tstack[ssize++] = 0;
        }
    }
    printf("\n");
    return 0;
}
