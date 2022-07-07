#include <stdio.h>

void swap(int& a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    while(a || b || c){
        if (a > b) swap(a,b);
        if (b > c) swap(b,c);
        if (a > b) swap(a,b);

        printf("%s\n", ((a*a)+(b*b)==(c*c)?"right":"wrong"));

        scanf("%d %d %d", &a, &b, &c);
    }
    return 0;
}
