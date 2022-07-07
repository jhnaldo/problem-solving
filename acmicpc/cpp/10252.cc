#include <stdio.h>

void cycle(int n, int m){
    int i, j;
    if (n%2 == 0){
        for (i = 0; i < n; i++){
            if (i%2 == 0){
                for (j = 0; j < m; j++) printf("(%d,%d)\n", i, j);
            }else{
                for (j = m-1; j >= 0; j--) printf("(%d,%d)\n", i, j);
            }
        }
    }else if (m%2 == 0){
        for (j = 0; j < m; j++){
            if (j%2 == 0){
                for (i = 0; i < n; i++) printf("(%d,%d)\n", i, j);
            }else{
                for (i = n-1; i >= 0; i--) printf("(%d,%d)\n", i, j);
            }
        }
    }else{
        cycle(n-1, m-1);
        for (j = 0; j < m; j++) printf("(%d,%d)\n", n-1, j);
        for (i = n-2; i >= 0; i--) printf("(%d,%d)\n", i, m-1);
    }
}

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        printf("1\n");
        cycle(n, m);
    }
    return 0;
}
