#include <stdio.h>

int trans(int h, int m, int s){
    return h * 3600 + m * 60 + s;
}

int main(){
    int t = 3;
    while (t--){
        int h, m, s, _h, _m, _s;
        int result;
        scanf("%d %d %d %d %d %d", &h, &m, &s, &_h, &_m, &_s);
        result = trans(_h, _m, _s) - trans(h, m, s);
        printf("%d %d %d\n", result/3600, result%3600/60, result%60);
    }

    return 0;
}
