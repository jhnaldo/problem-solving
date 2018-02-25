#include <stdio.h>

void find(int n, int m, int k, int &x, int &y){
    int p, cur;
    x = y = cur = p = 0;
    while (true){
        for (; y < m-1-p; y++, cur++){
            if (cur == k-1)
                return;
        }
        for (; x < n-1-p; x++, cur++){
            if (cur == k-1)
                return;
        }
        for (; y > p; y--, cur++){
            if (cur == k-1)
                return;
        }
        do{
            if (cur == k-1)
                return;
            x--; cur++;
        }while (x > p+1);
        p++;
    }
}

int main(){
    int n, m, k;
    int x, y, cur;

    scanf("%d %d %d", &n, &m, &k);
    if (n*m < k){
        printf("0\n");
        return 0;
    }

    find(n, m, k, x, y);
    printf("%d %d\n", x+1, y+1);
    return 0;
}
