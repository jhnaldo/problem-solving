#include <stdio.h>
#include <algorithm>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i;
        int arr[5];
        for (i = 0; i < 5; i++)
            scanf("%d", &arr[i]);
        std::sort(arr, arr+5);
        if (arr[3]-arr[1] > 3) printf("KIN\n");
        else printf("%d\n", arr[1]+arr[2]+arr[3]);
    }
    return 0;
}
