#include <stdio.h>

int main(){
    int n;
    int arr[100000] = {};
    int sum = 0;
    int i;
    scanf("%d", &n);
    i = 0;
    while(n--){
        int k;
        scanf("%d", &k);
        if (k){
            arr[i++] = k;
            sum += k;
        }else{
            sum -= arr[--i];
        }
    }
    printf("%d\n", sum);
    return 0;
}
