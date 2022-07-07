#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        while (b % a){
            int x = b/a+1;
            a = a*x - b;
            b *= x;
        }
        printf("%d\n", b/a);
    }
    return 0;
}
