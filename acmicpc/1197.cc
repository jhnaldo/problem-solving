#include <stdio.h>

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

void swap (int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}

void sort (int weight[], int order[], int size){
    int fstack[100000], tstack[100000];
    int from, to, k = 1;
    int i, j;

    fstack[0] = 0;
    tstack[0] = size-1;
    while(k){
        k--;
        from = fstack[k];
        to = tstack[k];

        if (from < to){
            i = from + 1;
            j = to;
            while (true){
                for (; i <= to && weight[order[i]] <= weight[order[from]]; i++);
                for (; j > from && weight[order[j]] >= weight[order[from]]; j--);
                if (i < j) swap(order[i], order[j]);
                else break;
            }
            swap(order[from], order[j]);
            if (from < j-1){
                fstack[k] = from;
                tstack[k] = j-1;
                k++;
            }
            if (j+1 < to){
                fstack[k] = j+1;
                tstack[k] = to;
                k++;
            }
        }
    }
}

int main(){
    int v, e;
    UnionFind* uf;
    int from[100000], to[100000], weight[100000];
    int order[100000];
    int i, count = 0, sum = 0;

    scanf("%d %d", &v, &e);
    for (i = 0; i < e; i++){
        scanf("%d %d %d", &from[i], &to[i], &weight[i]);
        order[i] = i;
    }
    sort (weight, order, e);

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
