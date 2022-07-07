#include <stdio.h>

int each_sum(int n, int k){
    int sum = 0;
    while (n){
        sum += n%k;
        n /= k;
    }
    return sum;
}

int main(){
    for (int i = 1000; i <= 9999; i++){
        int sum_10 = each_sum(i, 10);
        int sum_12 = each_sum(i, 12);
        int sum_16 = each_sum(i, 16);

        if (sum_10 == sum_12 && sum_12 == sum_16)
            printf("%d\n", i);
    }
    return 0;
}
