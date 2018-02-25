#include <stdio.h>

int main(){
    int n, num;
    int max_sum, cur_max_sum;
    int i;

    scanf("%d", &n);
    scanf("%d", &num);
    max_sum = cur_max_sum = num;
    for (i = 1; i < n; i++){
        scanf("%d", &num);
        if (cur_max_sum < 0){
            cur_max_sum = num;
        }else{
            cur_max_sum += num;
        }

        if (max_sum < cur_max_sum)
            max_sum = cur_max_sum;
    }

    printf("%d\n", max_sum);

    return 0;
}
