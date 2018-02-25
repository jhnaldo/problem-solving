#include <stdio.h>

int main(){
    int n, p, q, m;
    int parent[101] = {0,};
    int ancestor_p[99], psize;
    int ancestor_q[99], qsize;
    int i, j;

    scanf("%d", &n);
    scanf("%d %d", &p, &q);
    scanf("%d", &m);
    for (i = 0; i < m; i++){
        int p, c;
        scanf("%d %d", &p, &c);
        parent[c] = p;
    }

    for (i = p, ancestor_p[0] = p, psize = 1; parent[i]; i = parent[i]) ancestor_p[psize++] = parent[i];
    for (i = q, ancestor_q[0] = q, qsize = 1; parent[i]; i = parent[i]) ancestor_q[qsize++] = parent[i];
    if (ancestor_p[psize-1] != ancestor_q[qsize-1]){
        printf ("-1\n");
    }else{
        for (i = psize-1, j = qsize-1; i > 0 && j > 0 && ancestor_p[i-1] == ancestor_q[j-1]; i--, j--);
        printf ("%d\n", i+j);
    }


    return 0;
}
