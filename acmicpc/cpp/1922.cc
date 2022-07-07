#include <stdio.h>
#include <stdlib.h>

int weight[100000];

class UnionFind{
public:
    UnionFind(int _size){
        int i;

        size = _size;
        id = new int[size];
        weight = new int[size];

        for (i = 0; i < size; i++){
            id[i] = i;
            weight[i] = 1;
        }
    }

    bool find (int p, int q)
    {
        return root(p) == root(q);
    }

    void unite (int p, int q)
    {
        int i = root(p);
        int j = root(q);
        if (weight[i] < weight[j]) { id[i] = j; weight[j] += weight[i]; }
        else { id[j] = i; weight[i] += weight[j]; }
    }

private:
    int* id;
    int* weight;
    int size;

    int root (int i)
    {
        while (i != id[i]){
            id[i] = id[id[i]];
            i = id[i];
        }
        return i;
    }
};

int compare (const void * a, const void * b){
    int a_order = *(int*)a;
    int b_order = *(int*)b;
    return ( weight[a_order] - weight[b_order] );
}

int main(){
    int v, e;
    UnionFind* uf;
    int from[100000], to[100000];;
    int order[100000];
    int i, count = 0, sum = 0;

    scanf("%d", &v);
    scanf("%d", &e);
    for (i = 0; i < e; i++){
        scanf("%d %d %d", &from[i], &to[i], &weight[i]);
        order[i] = i;
    }
    qsort (order, e, sizeof(int), compare);

    uf = new UnionFind(v);
    for (i = 0; count < v-1 && i < e; i++){
        int f = from[order[i]]-1;
        int t = to[order[i]]-1;
        int w = weight[order[i]];

        if (!uf->find(f, t)){
            uf->unite(f, t);
            count++;
            sum += w;
        }
    }
    printf ("%d\n", sum);

    return 0;
}
