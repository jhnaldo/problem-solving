#include <stdio.h>

bool check(int n){
    int i, j;
    bool ch = false;
    for (i = (n-1)/3 + 1; i <= (n-1)/2; i++){
        for (j = i; j >= (n-j-i); j--){
            if (i*i == j*j + (n-i-j)*(n-i-j)){
                if (ch) return false;
                ch = true;
            }
        }
    }
    return ch;
}

int main(){
    int n, count;
    scanf("%d", &n);
    for (count = 0; n >= 12; n--){
        if (check(n))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
