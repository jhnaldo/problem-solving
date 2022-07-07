#include <stdio.h>

#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)

int find_min(int *interval_min[], int n, int from, int to, int start, int cur, int k){
    int end = MIN(n, start+k);
    int mid = (start+(start+k))/2;

    if (from == start && to == end) return interval_min[cur][start/k];
    if (to <= mid) return find_min(interval_min, n, from, to, start, cur-1, k/2);
    if (mid <= from) return find_min(interval_min, n, from, to, mid, cur-1, k/2);

    int lmin = find_min(interval_min, n, from, mid, start, cur-1, k/2);
    int rmin = find_min(interval_min, n, mid, to, mid, cur-1, k/2);
    return MIN(lmin, rmin);
}

int find_max(int *interval_max[], int n, int from, int to, int start, int cur, int k){
    int end = MIN(n, start+k);
    int mid = (start+(start+k))/2;

    if (from == start && to == end) return interval_max[cur][start/k];
    if (to <= mid) return find_max(interval_max, n, from, to, start, cur-1, k/2);
    if (mid <= from) return find_max(interval_max, n, from, to, mid, cur-1, k/2);

    int lmax = find_max(interval_max, n, from, mid, start, cur-1, k/2);
    int rmax = find_max(interval_max, n, mid, to, mid, cur-1, k/2);
    return MAX(lmax, rmax);
    return 0;
}

int main(){
    int n, m;
    int arr[100000];
    int *interval_max[20], *interval_min[20], size[20], ssize;
    int i, j, from[100000], to[100000], k;

    scanf("%d %d", &n, &m);
    interval_max[0] = new int[n];
    interval_min[0] = new int[n];
    size[0] = n;
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        interval_min[0][i] = interval_max[0][i] = arr[i];
    }
    for (ssize = 1, k = 2; k/2 < n; ssize++, k *= 2){
        size[ssize] = (n-1)/k+1;
        interval_max[ssize] = new int[size[ssize]];
        interval_min[ssize] = new int[size[ssize]];
        for (j = 0; j < size[ssize]; j++){
            if (j*2+1 < size[ssize-1]){
                interval_max[ssize][j] = MAX(interval_max[ssize-1][j*2], interval_max[ssize-1][j*2+1]);
                interval_min[ssize][j] = MIN(interval_min[ssize-1][j*2], interval_min[ssize-1][j*2+1]);
            }else{
                interval_max[ssize][j] = interval_max[ssize-1][j*2];
                interval_min[ssize][j] = interval_min[ssize-1][j*2];
            }
        }
    }
    k /= 2;

    for (i = 0; i < m; i++){
        scanf("%d %d", &from[i], &to[i]);
        from[i]--;
    }

    getchar();
    for (i = 0; i < m; i++){
        printf("%d %d\n",
                find_min(interval_min, n, from[i], to[i], 0, ssize-1, k),
                find_max(interval_max, n, from[i], to[i], 0, ssize-1, k));
    }
    return 0;
}
