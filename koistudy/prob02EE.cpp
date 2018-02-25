#include <stdio.h>

int main(){
    int n, k;
    int i, j, sum = 1800;
    scanf("%d %d", &n, &k);
    for (i = 0; i < 5*k; i++){
        int time;
        scanf("%d", &time);
        sum += time*50;
    }
    if (n < sum) {
        printf("I can take %d more class\n", (sum-n)/50);
    }else if(n - sum > 2880){
        printf("I am sleepy\n");
    }else{
        printf("I will sleep %d minute\n", n - sum);
    }
    return 0;
}
