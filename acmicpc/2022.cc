#include <stdio.h>
#include <math.h>

#define MAX 100000

double x, y, c, t;

void swap(double &x, double &y){
    double tmp = x;
    x = y;
    y = tmp;
}

double f(double t){
    return 1 / sqrt(x*x-t*t) + 1 / sqrt(y*y-t*t) - 1/c;
}

double f_prime(double t){
    return t / pow(sqrt(x*x-t*t),3) + t / pow(sqrt(y*y-t*t),3);
}

int main(){
    while(scanf("%lf %lf %lf", &x, &y, &c) != EOF){
        if (x > y) swap(x,y);
        for (t = x/2; f(t) < 0; t = (x+t)/2);
        for (int i = 0; f(t) > 0 && i < MAX; t -= f(t)/f_prime(t), i++);
        printf("%.3lf\n", t);
    }
    return 0;
}
