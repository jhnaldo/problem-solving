#include <stdio.h>

int main(){
    int n, m;
    int link[100][99], size[100] = {0,}, stack[100], ssize = 0;
    bool check[100] = {0,};
    int i, j, from, to, count = 0;

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++){
        scanf("%d %d", &from, &to);
        from--; to--;
        link[from][size[from]++] = to;
        link[to][size[to]++] = from;
    }

    stack[ssize++] = 0;
    check[0] = true;
    while(ssize){
        int cur = stack[--ssize];
        for (i = 0; i < size[cur]; i++){
            if (!check[link[cur][i]]){
                count++;
                check[link[cur][i]] = true;
                stack[ssize++] = link[cur][i];
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
