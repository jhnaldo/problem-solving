#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i;
        int pre[1000], in[1000], in_rev[1000];
        int from[3000], to[3000], size;

        scanf("%d", &n);
        for (i = 0; i < n; i++){
            scanf("%d", &pre[i]);
            pre[i]--;
        }
        for (i = 0; i < n; i++){
            scanf("%d", &in[i]);
            in[i]--;
            in_rev[in[i]] = i;
        }

        size = 1;
        from[0] = 0;
        to[0] = n;
        i = 0;
        while(size){
            size--;
            int f = from[size];
            int t = to[size];
            if (f == t ) {
                printf ("%d ", in[f]+1);
            }else{
                int m = in_rev[pre[i++]];
                from[size] = m;
                to[size] = m;
                size++;
                if (m+1 < t){
                    from[size] = m+1;
                    to[size] = t;
                    size++;
                }
                if (f < m){
                    from[size] = f;
                    to[size] = m;
                    size++;
                }
            }
        }
        printf ("\n");
    }
    return 0;
}
