#include <stdio.h>

void swap (int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int gcd (int a, int b){
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
        int new_x = x * other->y + other->x * y;
        int new_y = y * other->y;
        int g = gcd(new_x, new_y);
        x = new_x / g;
        y = new_y / g;
    }

    void display(){
        printf("%lld/%lld\n", x, y);
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
