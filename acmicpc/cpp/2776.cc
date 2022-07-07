#include <stdio.h>
#include <algorithm>

bool check (int arr[], int from, int to, int k){
    int mid = (from+to)/2;

    if (arr[mid] == k) return true;
    if (arr[mid] < k && mid+1 < to) return check(arr, mid+1, to, k);
    if (arr[mid] > k && from < mid) return check(arr, from, mid, k);
    return false;
}

int main(){
    int t, n, m, k;
    int *arr;
    int i;

    scanf("%d", &t);
    for (; t > 0; t--){
        int arr[1000000];

        scanf ("%d", &n);
        for (i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        std::sort(arr, arr+n);

        scanf ("%d", &m);
        for (i = 0; i < m; i++){
            scanf("%d", &k);
            printf("%d\n", check(arr, 0, n, k));
        }
    }
    return 0;
}
