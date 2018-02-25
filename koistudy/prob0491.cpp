#include <stdio.h>

int main(){
    int k, n;
    int arr[10] = {};
    bool check = false;
    int i;
    scanf("%d %d", &k, &n);
    for (i = 0; i < n; i++){
        int vote;
        scanf("%d", &vote);
        arr[vote]++;
    }
    for (i = 1; i <= k; i++){
        if (arr[i] == 0){
            printf("%d ", i);
            check = true;
        }
    }
    if (!check) printf("good\n");
    else printf("\n");
    return 0;
}
