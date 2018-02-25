#include <stdio.h>

#define OUT 1
#define EDGE 2
#define IN 3

int getMin(int dist[], int state[], int n){
    int i;
    int cur = -1;
    for (i = 0; i < n; i++){
        if (state[i] == EDGE && (cur == -1 || dist[cur] > dist[i]))
            cur = i;
    }
    return cur;
}

int main(){
    int n, m;
    int edge[10][10];
    int dist[10];
    int state[10];
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        state[i] = OUT;
        dist[i] = -1;
        for (j = 0; j < n; j++)
            edge[i][j] = -1;
    }
    for (i = 0; i < m; i++){
        int from, to, weight;
        scanf("%d %d %d", &from, &to, &weight);
        from--; to--;
        if (from != to && (edge[from][to] == -1 || edge[from][to] > weight))
            edge[from][to] = edge[to][from] = weight;
    }

    dist[0] = 0;
    state[0] = EDGE;
    while(true){
        int cur = getMin(dist, state, n);
        if (cur == -1) break;

        state[cur] = IN;
        for (i = 0; i < n; i++){
            if (edge[cur][i] != -1){
                int weight = dist[cur] + edge[cur][i];
                if (state[i] != IN && (dist[i] == -1 || dist[i] > weight)){
                    state[i] = EDGE;
                    dist[i] = weight;
                }
            }
        }
    }

    printf("%d\n", dist[n-1]);

    return 0;
}
