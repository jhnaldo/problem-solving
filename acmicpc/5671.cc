#include <stdio.h>

bool check(int n){
    bool ncheck[10] = {0,};
    for (; n; n /= 10){
        if (ncheck[n%10]) return false;
        ncheck[n%10] = true;
    }
    return true;
}

int main(){
    while (true){
        int n, m, count = 0;
        if (scanf("%d %d", &n, &m) == EOF) break;
        for (; n <= m; n++)
            if (check(n)) count++;
        printf("%d\n", count);
    }
    return 0;
}
