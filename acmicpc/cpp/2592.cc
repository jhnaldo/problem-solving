#include <stdio.h>

int main(){
    int arr[10], sum = 0, max;
    int count[100] = {0,};
    int i;

    for (i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        count[arr[i]/10]++;
    }

    max = 1;
    for (i = 2; i < 100; i++){
        if (count[max] < count[i])
            max = i;
    }

    printf("%d\n%d\n", sum/10, max*10);
    return 0;
}
