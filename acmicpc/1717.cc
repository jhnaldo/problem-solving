#include <stdio.h>

class UnionFind{
public:
    UnionFind(int _size){
        int i;
        size = _size+1;
        id = new int[size];
        weight = new int[size];
        for (i = 0; i < size; i++){
            id[i] = i;
            weight[i] = 1;
        }
    }

    int root(int k){
        while (k != id[k]){
            id[k] = id[id[k]];
            k = id[k];
        }
        return k;
    }

    bool same_check(int x, int y) {
        return root(x) == root(y);
    }

    void make_union(int x, int y){
        int x_root = root(x);
        int y_root = root(y);

        if (weight[x_root] > weight[y_root]){ id[y_root] = x_root; weight[x_root] += weight[y_root];}
        else { id[x_root] = y_root; weight[y_root] += weight[x_root];}
    }
private:
    int* id;
    int* weight;
    int size;
};

int main(){
    int n, m;
    int k, a, b;
    UnionFind* uf;

    scanf("%d %d", &n, &m);
    uf = new UnionFind(n);
    for (; m > 0; m--){
        scanf("%d %d %d", &k, &a, &b);
        if (k){
            printf("%s\n", (uf->same_check(a, b)?"YES":"NO"));
        }else{
            uf->make_union(a, b);
        }
    }

    return 0;
}
