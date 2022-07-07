#include <stdio.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

void big_add(int *left, int lsize, int *right, int rsize, int *result, int& size){
    int i;
    for (i = 0; i < lsize && i < rsize; i++)
        result[i] = left[i] + right[i];
    for (i = rsize; i < lsize; i++)
        result[i] = left[i];
    for (i = lsize; i < rsize; i++)
        result[i] = right[i];

    size = MAX(lsize, rsize);
    for (i = 0; i < size-1; i++){
        if (result[i] > 9) {
            result[i+1]++;
            result[i] -= 10;
        }
    }
    if (result[size-1] > 9){
        result[size] = 1;
        result[size-1] -= 10;
        size++;
    }
}

int main(){
    int n, i;
    int *pprev, *prev, *cur;
    int pplen, plen, clen;
    scanf("%d", &n);
    if (n <= 1){
        printf("%d\n", n);
        return 0;
    }
    pprev = new int[10000]();
    prev = new int[10000]();
    cur = new int[10000]();
    pplen = plen = clen = 1;
    pprev[0] = 0;
    prev[0] = 1;
    cur[0] = 1;
    for (i = 2; i < n; i++){
        int *tmp = pprev;
        pprev = prev;
        prev = cur;
        cur = tmp;
        pplen = plen;
        plen = clen;
        big_add(pprev, pplen, prev, plen, cur, clen);
    }

    for (i = clen-1; i >= 0; i--)
        printf("%d", cur[i]);
    printf("\n");

    delete[] pprev;
    delete[] prev;
    delete[] cur;
    return 0;
}
