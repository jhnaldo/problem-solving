#include <stdio.h>

#define MIN(a, b) (a<b?a:b)
#define PARENT(x) ((x-1)/2)
#define LCHILD(x) ((x*2)+1)
#define RCHILD(x) ((x*2)+2)

class PriorQueue{
public:
    PriorQueue(){
        size = 0;
        int i;
        for (i = 0; i < 800; i++)
            pos[i] = -1;
    }

    void push(int _weight, int _vertex){
        int i;
        weight[size] = _weight;
        vertex[size] = _vertex;
        pos[_vertex] = size;
        for (i = size; i > 0 && weight[PARENT(i)] > weight[i]; i = PARENT(i)) swap(PARENT(i), i);
        size++;
    }

    void pop(int &v, int &w){
        int i;
        v = vertex[0];
        w = weight[0];
        swap (0, --size);
        pos[v] = -1;
        for (i = 0; LCHILD(i) < size; i++){
            int min;
            if (RCHILD(i) < size) min = (weight[LCHILD(i)] < weight[RCHILD(i)]? LCHILD(i):RCHILD(i));
            else min = LCHILD(i);
            if (weight[min] < weight[i]) swap(min, i);
            else break;
        }
    }

    void relax(int _vertex, int _weight){
        int i;
        int _pos = pos[_vertex];
        weight[_pos] = MIN(weight[_pos], _weight);
        for (i = _pos; i > 0 && weight[PARENT(i)] > weight[i]; i = PARENT(i)) swap(PARENT(i), i);
    }

    bool contain(int v){ return pos[v] != -1; }
    bool isEmpty(){ return size == 0; }
private:
    int weight[800];
    int vertex[800];
    int pos[800];
    int size;

    void _swap(int& x, int &y){
        int tmp = x;
        x = y;
        y = tmp;
    }

    void swap(int x, int y){
        _swap(weight[x], weight[y]);
        _swap(vertex[x], vertex[y]);
        _swap(pos[vertex[x]], pos[vertex[y]]);
    }
};

void dijkstra(int neighbors[800][800], int n, int weight[800][800], int size[800], int dist[800], int from){
    bool check[800] = {0,};
    PriorQueue* pq = new PriorQueue();
    int i, j;

    for (i = 0; i < n; i++)
        dist[i] = -1;
    pq->push(0, from);
    while (!pq->isEmpty()){
        int v, w;
        pq->pop(v, w);
        check[v] = true;
        dist[v] = w;
        for (i = 0; i < size[v]; i++){
            int neighbor = neighbors[v][i];
            int w = dist[v] + weight[v][i];
            if (!check[neighbor]){
                if (pq->contain(neighbor)){
                    pq->relax(neighbor, w);
                }else{
                    pq->push(w, neighbor);
                }
            }
        }
    }
}

int main(){
    int n, m;
    int neighbors[800][800], weight[800][800], size[800] = {0,};
    int first, second, fdist[800], sdist[800];
    int i, j;

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++){
        int from, to, w;
        scanf("%d %d %d", &from, &to, &w);
        from--; to--;
        neighbors[from][size[from]] = to;
        weight[from][size[from]++] = w;
        neighbors[to][size[to]] = from;
        weight[to][size[to]++] = w;
    }
    scanf("%d %d", &first, &second);
    first--; second--;

    dijkstra(neighbors, n, weight, size, fdist, first);
    dijkstra(neighbors, n, weight, size, sdist, second);

    if (fdist[0] == -1 || fdist[second] == -1 || fdist[n-1] == -1){
        printf("-1\n");
    }else{
        int path1 = fdist[0] + fdist[second] + sdist[n-1];
        int path2 = sdist[0] + fdist[second] + fdist[n-1];
        printf("%d\n", MIN(path1, path2));
    }

    return 0;
}
