#include <stdio.h>

int check(int from, int to, int _from, int _to){
    if (from <= _from && _from < to) return 2;
    if (from < _to && _to <= to) return 2;
    if (_from < from && to < _to) return 2;
    if (from == _to || to == _from) return 1;
    else return 0;
}

int main(){
    int x, y, p, q, _x, _y, _p, _q;
    scanf("%d %d %d %d %d %d %d %d", &x, &y, &p, &q, &_x, &_y, &_p, &_q);
    switch(check(x,p,_x,_p) * check(y,q,_y,_q)){
        case 0: printf("none\n"); break;
        case 1: printf("point\n"); break;
        case 2: printf("line\n"); break;
        case 4: printf("rectangle\n"); break;
    }
    return 0;
}
