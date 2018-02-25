#include <stdio.h>

#define IND(x, y) (((x)-1)*n+((y)-1))

class UnionFind{
public:
    UnionFind(int n){
        int i;
        id = new int[n];
        weight = new int[n];
        for (i = 0; i < n; i++){
            id[i] = i;
            weight[i] = 1;
        }
    }

    int root(int x){
        while (x != id[x]){
            id[x] = id[id[x]];
            x = id[x];
        }
        return x;
    }

    bool same_union(int x, int y){
        return (root(x) == root(y));
    }

    void make_union(int x, int y){
        int root_x = root(x);
        int root_y = root(y);

        if (weight[root_x] > weight[root_y]){
            id[root_y] = root_x;
            weight[root_x] += weight[root_y];
        }else{
            id[root_x] = root_y;
            weight[root_y] += weight[root_x];
        }
    }
private:
    int* id;
    int* weight;
};

void check(int ind, int ind2, UnionFind* uf, int& num){
    if (!uf->same_union(ind, ind2)){
        num--;
        uf->make_union(ind, ind2);
    }
}

int main(){
    int n, m, num;
    int i, j;

    scanf("%d %d", &n, &m);
    while (n){
        int arr[52][52] = {0,};
        UnionFind* uf = new UnionFind(n*m);
        num = 0;
        for (i = 1; i <= m; i++){
            for (j = 1; j <= n; j++){
                scanf("%d", &arr[i][j]);
                if (arr[i][j]){
                    num++;
                    int ind = IND(i,j);
                    if (arr[i-1][j+1])  check (ind, IND(i-1, j+1), uf, num);
                    if (arr[i-1][j])    check (ind, IND(i-1, j), uf, num);
                    if (arr[i-1][j-1])  check (ind, IND(i-1, j-1), uf, num);
                    if (arr[i][j-1])    check (ind, IND(i, j-1), uf, num);
                }
            }
        }
        printf ("%d\n", num);
        delete uf;
        scanf("%d %d", &n, &m);
    }
    return 0;
}
