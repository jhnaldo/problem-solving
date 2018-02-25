#include <stdio.h>

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a, b, i;
    int max = 0;
    scanf("%d %d", &a, &b);
    if (a > b) swap(a,b);
    for (i = a; i <= b; i++){
        unsigned long long k = i;
        int count = 1;
        while (k > 1){
            if (k%2) k = k*3+1;
            else k /= 2;
            count++;
        }
        max = (max > count? max: count);
    }
    printf("%d\n", max);
    return 0;
}
