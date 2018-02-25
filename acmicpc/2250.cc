#include <stdio.h>

int main(){
    int n, i, k;
    int lchild[10000], rchild[10000], root;
    int stack[10000], depth[10000], display[10000], size;
    int from[10000] = {0,}, to[10000];
    bool not_root[100000] = {0,};

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int p, lch, rch;
        scanf ("%d %d %d", &p, &lch, &rch);
        p--;
        if (lch != -1){
            lchild[p] = lch-1;
            not_root[lch-1] = true;
        }else{
            lchild[p] = -1;
        }
        if (rch != -1){
            rchild[p] = rch-1;
            not_root[rch-1] = true;
        }else{
            rchild[p] = -1;
        }
    }

    getchar();

    root = 0;
    for (i = 0; i < n; i++){
        if (!not_root[i]){
            root = i;
            break;
        }
    }

    size = 1;
    stack[0] = root;
    depth[0] = display[0] = 0;
    k = 1;
    while (size){
        --size;
        int cur = stack[size];
        int d = depth[size];
        int disp = display[size];

        if (disp){
            if (!from[d])
                from[d] = k;
            to[d] = k;
            k++;
        }else{
            if (rchild[cur] != -1){
                stack[size] = rchild[cur];
                depth[size] = d+1;
                display[size] = 0;
                size++;
            }
            stack[size] = cur;
            depth[size] = d;
            display[size] = 1;
            size++;
            if (lchild[cur] != -1){
                stack[size] = lchild[cur];
                depth[size] = d+1;
                display[size] = 0;
                size++;
            }
        }
    }

    int ans, max = 0;
    for (i = 0; from[i]; i++){
        if (max < to[i] - from[i] + 1){
            max = to[i] - from[i] + 1;
            ans = i;
        }
    }

    printf ("%d %d\n", ans+1, max);

    return 0;
}
