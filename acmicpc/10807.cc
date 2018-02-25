#include <stdio.h>

int main(){
    int n;
    int arr[201] = {0,};
    scanf("%d", &n);
    while(n--){
        int k;
        scanf("%d", &k);
        arr[k+100]++;
    }
    scanf("%d", &n);
    printf("%d\n", arr[n+100]);
    return 0;
}
