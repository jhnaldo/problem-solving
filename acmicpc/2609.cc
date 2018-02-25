#include <stdio.h>

void swap(int& n, int& m){
    int temp = n;
    n = m;
    m = temp;
}

int gcd (int n, int m){
    int temp;
    if (n < m) swap(n,m);
    while ((temp = n%m)){
        n = m;
        m = temp;
    }
    return m;
}

int main(){
    int n, m;
    int g;

    scanf("%d %d", &n, &m);
    g = gcd(n, m);
    printf("%d\n%d\n", g, n/g*m);
    return 0;
}
