#include <stdio.h>

int lcm(int a, int b){
    int l = a*b;
    int t;
    if (a < b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    while((t = a%b)){
        a = b;
        b = t;
    }
    return l / b;
}

int main(){
    int a, b, c, d, e;
    int min, l;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    min = lcm(lcm(a, b), c);
    l = lcm(lcm(a, b), d); if (l < min) min = l;
    l = lcm(lcm(a, b), e); if (l < min) min = l;
    l = lcm(lcm(a, c), d); if (l < min) min = l;
    l = lcm(lcm(a, c), e); if (l < min) min = l;
    l = lcm(lcm(a, d), e); if (l < min) min = l;
    l = lcm(lcm(b, c), d); if (l < min) min = l;
    l = lcm(lcm(b, c), e); if (l < min) min = l;
    l = lcm(lcm(b, d), e); if (l < min) min = l;
    l = lcm(lcm(c, d), e); if (l < min) min = l;

    printf("%d\n", min);

    return 0;
}
