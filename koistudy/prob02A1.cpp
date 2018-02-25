#include <stdio.h>

int main(){
    int arr[10], target;
    int i, count = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);
    target--;
    for (i = 0; i < 10; i++){
        if (arr[target] < arr[i]) count++;
    }
    if (count == 0) printf("WINNER\n");
    else if (count <= 2) printf("GOLD\n");
    else if (count <= 5) printf("SILVER\n");
    else printf("BRONZE\n");
    return 0;
}
