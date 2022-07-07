#include <stdio.h>

int main(){
    int n, m;

    scanf("%d", &n);
    while (n){
        int odd, even;
        scanf("%d", &m);

        if (m%2){
            odd = m;
            even = m+1;
        }else{
            odd = m-1;
            even = m;
        }
        if (m > n/2){
            printf ("%d %d %d\n", n+1-even, n+1-odd, (m%2?even:odd));
        }else{
            printf ("%d %d %d\n", (m%2?even:odd), n+1-even, n+1-odd);
        }
        scanf("%d", &n);
    }
    return 0;
}
