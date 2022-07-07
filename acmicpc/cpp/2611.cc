#include <stdio.h>

int main(){
    int n, m;
    int **in, **out, **weight;
    int *isize, *osize, *count, size;
    int *order, *dist, *before, *stack;
    int i, j;

    scanf("%d\n%d", &n, &m);

    in = new int*[n+1];
    out = new int*[n+1];
    weight = new int*[n+1];
    isize = new int[n+1]();
    osize = new int[n+1]();
    count = new int[n+1]();
    for (i = 0; i <= n; i++){
        in[i] = new int[n+1];
        out[i] = new int[n+1];
        weight[i] = new int[n+1]();
    }

    for (i = 0; i < m; i++){
        int from, to, w;
        scanf("%d %d %d", &from, &to, &w);
        from--; to--;
        if (to == 0) to = n;
        in[to][isize[to]++] = from;
        out[from][osize[from]++] = to;
        weight[from][to] = w;
        count[to]++;
    }

    order = new int[n+1];
    dist = new int[n+1];
    before = new int[n+1];
    size = 0;
    for (i = 0; i <= n; i++){
        if (!count[i]){
            order[size++] = i;
        }
    }

    for (i = 0; i < size; i++){
        int cur = order[i];
        for (j = 0; j < osize[cur]; j++){
            int t = out[cur][j];
            if (!(--count[t])) order[size++] = t;
        }
        dist[cur] = 0;
        before[cur] = -1;
        for (j = 0; j < isize[cur]; j++){
            int f = in[cur][j];
            if (dist[f]+weight[f][cur] > dist[cur]){
                dist[cur] = dist[f]+weight[f][cur];
                before[cur] = f;
            }
        }
    }
    stack = new int[n+1];
    stack[0] = 1;
    for (i = 1, j = n; before[j] != -1; j = before[j]) stack[i++] = before[j]+1;

    printf("%d\n", dist[n]);
    for (i--; i >= 0; i--) printf("%d ", stack[i]);
    printf("\n");

    delete[] stack;
    delete[] order;
    delete[] dist;
    delete[] before;
    for (i = 0; i <= n; i++){
        delete[] in[i];
        delete[] out[i];
        delete[] weight[i];
    }
    delete[] in;
    delete[] isize;
    delete[] out;
    delete[] osize;
    delete[] weight;

    return 0;
}
