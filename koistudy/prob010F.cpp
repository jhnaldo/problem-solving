#include <stdio.h>
#include <stdlib.h>

class Fraction{
public:
    Fraction(int x, int y): x(x), y(y) {}
    int x;
    int y;
};

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int gcd(int x, int y){
    if (x < y) swap(x,y);
    while (x % y){
        x %= y;
        swap(x, y);
    }
    return y;
}

int comp(const void* left, const void* right){
    Fraction* l = *(Fraction**) left;
    Fraction* r = *(Fraction**) right;
    return (l->x * r->y) - (r->x * l->y);
}

int main(){
    Fraction* arr[30000];
    int n;
    int size;
    int i, j;
    scanf("%d", &n);
    size = 2;
    arr[0] = new Fraction(0, 1);
    arr[1] = new Fraction(1, 1);
    for (i = 1; i <= n; i++){
        for (j = 1; j < i; j++){
            if (gcd(i, j) == 1)
                arr[size++] = new Fraction(j, i);
        }
    }

    qsort(arr, size, sizeof(Fraction*), comp);
    for (i = 0; i < size; i++)
        printf("%d/%d\n", arr[i]->x, arr[i]->y);

    for(i = 0; i < size; i++) delete arr[i];
    return 0;
}
