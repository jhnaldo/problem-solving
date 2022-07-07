#include <stdio.h>      // printf, scanf
#include <algorithm>    // std::binary_search, std::sort
#include <vector>       // std::vector

int main(){
    int n, m;
    int arr[100000];
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    std::vector<int> v(arr, arr+n);
    std::sort (v.begin(), v.end());

    scanf("%d", &m);
    for (i = 0; i < m; i++){
        int num;
        scanf("%d", &num);
        printf("%d\n", (std::binary_search (v.begin(), v.end(), num)? 1:0));
    }

    return 0;
}
