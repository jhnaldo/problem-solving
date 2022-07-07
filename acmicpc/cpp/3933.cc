#include <stdio.h>

int main(){
    while (true){
        int n, i, j, p, q, sq_sum, count = 0;
        scanf("%d", &n);
        if (!n) break;
        for (i = 0; i*i < n; i++){
            for (j = i; i*i+j*j < n; j++){
                for (p = j; i*i+j*j+p*p < n; p++){
                    for (q = p; i*i+j*j+p*p+q*q < n; q++);
                    if (i*i+j*j+p*p+q*q == n) count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
