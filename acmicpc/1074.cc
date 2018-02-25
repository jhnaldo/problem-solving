#include <stdio.h>

int main(){
    while (true){
        int n, r, c, i, pos = 0, factor;
        if (scanf("%d %d %d", &n, &r, &c) == EOF) break;
        for (i = 0, factor = 1; i < n; i++, factor *= 4){
            pos += ((r%2)*2+(c%2))*factor;
            r /= 2;
            c /= 2;
        }
        printf("%d\n", pos);
    }
    return 0;
}
