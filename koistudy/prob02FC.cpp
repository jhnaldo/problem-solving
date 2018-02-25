#include <stdio.h>

void swap (long long &x, long long &y){
    long long tmp = x;
    x = y;
    y = tmp;
}

int gcd (long long a, long long b){
    if (a < b) swap(a,b);
    while (a % b){
        a %= b;
        swap(a, b);
    }
    return b;
}

class Fraction{
public:
    Fraction(long long  _x, long long _y){
        x = _x;
        y = _y;
    }

    void add(Fraction *other){
        long long new_x = x * other->y + other->x * y;
        long long new_y = y * other->y;
        if (new_x){
            long long g = gcd((new_x > 0? new_x: -new_x), new_y);
            x = new_x / g;
            y = new_y / g;
        }else{
            x = 0;
            y = 1;
        }
    }

    void display(){
        if (x){
            printf("%lld/%lld\n", x, y);
        }else{
            printf("0\n");
        }
    }

    long long x;
    long long y;
};

int main(){
    int n;
    long long x, y;
    int i;
    Fraction *result, *tmp;

    scanf("%d", &n);
    scanf("%lld %lld", &x, &y);

    result = new Fraction(x, y);
    for (i = 1; i < n; i++){
        scanf("%lld %lld", &x, &y);
        tmp = new Fraction(x, y);
        result->add(tmp);
        delete tmp;
    }

    result->display();

    delete result;
    return 0;
}
