#include <stdio.h>

#define ABS(a) ((a)<0?-(a):(a))

int main(){
    while (true){
        int a, b, c, d, i;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (!a && !b && !c && !d) break;
        for (i = 0; a != b ||  b != c || c != d; i++){
            int _a, _b, _c, _d;
            _a = ABS(a-b);
            _b = ABS(b-c);
            _c = ABS(c-d);
            _d = ABS(d-a);
            a = _a;
            b = _b;
            c = _c;
            d = _d;
        }
        printf("%d\n", i);
    }
    return 0;
}
