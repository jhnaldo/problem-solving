#include <stdio.h>

#define BOUND 1000000000

class Num{
public:
    Num(long long n){
        arr[0] = 0;
        arr[1] = n/BOUND;
        arr[2] = n%BOUND;
    }

    void add(Num* other){
        arr[0] += other->arr[0];
        arr[1] += other->arr[1];
        arr[2] += other->arr[2];

        if (arr[2] >= BOUND){
            arr[1]++;
            arr[2] -= BOUND;
        }

        if (arr[1] >= BOUND){
            arr[0]++;
            arr[1] -= BOUND;
        }
    }

    void sub(Num* other){
        arr[0] -= other->arr[0];
        arr[1] -= other->arr[1];
        arr[2] -= other->arr[2];

        if (arr[2] < 0){
            arr[1]--;
            arr[2] += BOUND;
        }

        if (arr[1] < 0){
            arr[0]--;
            arr[1] += BOUND;
        }
    }

    void mul(Num* other){
        arr[0] = arr[1]*other->arr[1];
        arr[1] = arr[1]*other->arr[2] + arr[2]*other->arr[1];
        arr[2] = arr[2]*other->arr[2];

        if (arr[2] >= BOUND){
            arr[1] += arr[2] / BOUND;
            arr[2] %= BOUND;
        }

        if (arr[1] >= BOUND){
            arr[0] += arr[1] / BOUND;
            arr[1] %= BOUND;
        }
    }

    void display(){
        if (arr[0]) printf("%lld%09lld%09lld\n", arr[0], arr[1], arr[2]);
        else if (arr[1]) printf("%lld%09lld\n", arr[1], arr[2]);
        else printf("%lld\n", arr[2]);
    }

    long long to_ll() { return arr[1]*BOUND + arr[2]; }

    long long arr[3];
};

int main(){
    long long n;
    long long start, k, t;
    Num *a, *b, *x, *y, *z;

    scanf("%lld", &n);

    k = (n-1)/3 - 1;
    start = (n-1)/2 - k - 1;
    t = n - k - start - 1;

    a = new Num(start);
    b = new Num(k + 2);
    a->mul(b);
    if (start % 2){
        x = new Num((start - 1)/2);
        y = new Num((2*t - 1 - start)/2);
        z = new Num((start + (start + 2 - 2*t - 1) - (t%2) * 2)/4);
        a->add(z);
        delete z;
    }else{
        x = new Num(start/2);
        y = new Num((2*t - 2 - start)/2);
    }
    x->mul(y);
    a->sub(x);

    a->display();

    delete a;
    delete b;
    delete x;
    delete y;
    return 0;
}
