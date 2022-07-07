#include <stdio.h>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b){
    if (a>b) swap(a,b);
    int rem;
    while ((rem = b%a)){
        b = a;
        a = rem;
    }
    return a;
}

int main(){
    int n;

    scanf("%d", &n);
    for(; n > 0; n--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a/gcd(a, b)*b);
    }
    return 0;
}
