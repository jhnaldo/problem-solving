#include <stdio.h>

void turn (int before[], int n, int from, int to, int after[]){
    int i;
    for (i = 0; i < from; i++) after[i] = before[i];
    for (; i < to; i++) after[i] = before[to+from-i-1];
    for (; i < n; i++) after[i] = before[i];
}

bool check (int arr[], int n){
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] != i+1) return false;
    return true;
}

int main(){
    int n;
    int arr[10000], first[10000], second[10000], cut[11], csize = 1;
    int i, j, p, q, count;
    scanf ("%d", &n);
    scanf ("%d", &arr[0]);
    count = 1;
    cut[0] = 0;
    for (i = 1; i < n; i++){
        scanf ("%d", &arr[i]);
        if (arr[i] == arr[i-1]-1 || arr[i] == arr[i-1]+1){
            count++;
        }else{
            if (count == 2)
                cut[csize++] = i-1;
            cut[csize++] = i;
            count = 1;
        }
    }
    cut[csize++] = n;
    for (i = 0; i < csize; i++){
        for (j = i+1; j < csize; j++){
            int fcut[2], fcsize = 0;
            turn (arr, n, cut[i], cut[j], first);
            if (check(first, n)){
                printf ("1 1\n%d %d\n", cut[i]+1, cut[j]);
                return 0;
            }
            for (p = 1; p < n; p++){
                if (first[p] != first[p-1]-1 && first[p] != first[p-1]+1){
                    if (fcsize == 2) break;
                    fcut[fcsize++] = p;
                }
            }
            if (p < n) continue;
            if (fcsize == 0){
                turn (first, n, 0, n, second);
                if (check(second,n)) { printf("%d %d\n%d %d\n", cut[i]+1, cut[j], 1, n); return 0; }
            }else if (fcsize == 1){
                turn (first, n, 0, fcut[0], second);
                if (check(second,n)) { printf("%d %d\n%d %d\n", cut[i]+1, cut[j], 1, fcut[0]); return 0; }
                turn (first, n, fcut[0], n, second);
                if (check(second,n)) { printf("%d %d\n%d %d\n", cut[i]+1, cut[j], fcut[0]+1, n); return 0; }
            }else{
                turn (first, n, fcut[0], fcut[1], second);
                if (check(second,n)) { printf("%d %d\n%d %d\n", cut[i]+1, cut[j], fcut[0]+1, fcut[1]); return 0; }
            }
        }
    }
    return 0;
}
