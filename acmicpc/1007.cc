#include <stdio.h>
#include <math.h>

double  x_arr[20], y_arr[20];
double sum_x, sum_y;
double min;

void find_min (int n, int from, int k, double x, double y){
    int i;
    if (!k){
        double value = sqrt(x*x+y*y);
        if (min == -1 || min > value) min = value;
        return;
    }
    for (i = from; i+k-1 < n; i++)
        find_min (n, i+1, k-1, x-2*x_arr[i], y-2*y_arr[i]);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, i;
        scanf("%d", &n);
        sum_x = sum_y = 0.0;
        for (i = 0; i < n; i++){
            scanf("%lf %lf", &x_arr[i], &y_arr[i]);
            sum_x += x_arr[i];
            sum_y += y_arr[i];
        }

        min = -1.0;
        find_min(n, 0, n/2, sum_x, sum_y);
        printf("%.6lf\n", min);
    }
    return 0;
}
