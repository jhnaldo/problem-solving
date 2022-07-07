#include <stdio.h>

void swap(int &n, int &m){
    int tmp = n;
    n = m;
    m = tmp;
}

int gcd(int n, int m){
    int tmp;
    if (n < m) swap(n,m);
    while ((tmp = n % m)){
        n = m;
        m = tmp;
    }
    return m;
}

int main(){
    int n, m;

    scanf("%d %d", &n, &m);
    printf("%d\n", n+m-gcd(n,m));
    return 0;
}
