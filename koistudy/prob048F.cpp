#include <stdio.h>

int main(){
    int n, i;
    int before, cur;
    before = cur = 1;
    scanf("%d", &n);
    for (i = 0; i < n-1; i++){
        int tmp = before + cur;
        before = cur;
        cur = tmp;
    }
    printf("%d\n", cur);
    return 0;
}
