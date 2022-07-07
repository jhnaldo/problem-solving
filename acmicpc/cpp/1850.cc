#include <stdio.h>
#include <iostream>
#include <stdint.h>

using namespace std;

uint64_t gcd(uint64_t n, uint64_t m){
    uint64_t remainder;
    if (n < m){
        uint64_t tmp = n;
        n = m;
        m = tmp;
    }

    while ((remainder = n % m)){
        n = m;
        m = remainder;
    }
    return m;
}

int main(){
    uint64_t n, m, g, i;
    cin >> n >> m;
    g = gcd(n,m);

    for (i = 0; i < g; i++)
        printf("1");
    printf("\n");

    return 0;
}
