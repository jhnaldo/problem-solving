#include <stdio.h>

int main(){
    int n, s;
    int arr[100000];
    int from, to, cur_sum, min_len = 0;

    scanf("%d %d", &n, &s);
    for (from = to = cur_sum = 0; to < n; to++){
        scanf("%d", &arr[to]);
        cur_sum += arr[to];
        if (cur_sum >= s){
            for (; cur_sum - arr[from] >= s; from++) cur_sum -= arr[from];
            if (!min_len || min_len > to-from+1) min_len = to-from+1;
        }
    }
    printf("%d\n", min_len);

    return 0;
}
