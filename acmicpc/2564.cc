#include <stdio.h>

#define ABS(x) ((x)<0?-(x):(x))

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int dist(int n, int m, int left_d, int left_p, int right_d, int right_p){
    if (left_d > right_d){
        swap (left_d, right_d);
        swap (left_p, right_p);
    }

    switch(left_d){
        case 1:
            switch(right_d){
                case 1: return ABS(left_p-right_p);
                case 2: return n+m - ABS((m-left_p)-right_p);
                case 3: return left_p + right_p;
                case 4: return (m-left_p) + right_p;
            }
        case 2:
            switch(right_d){
                case 2: return ABS(left_p-right_p);
                case 3: return left_p + (n-right_p);
                case 4: return (m-left_p) + (n-right_p);
            }
        case 3:
            switch(right_d){
                case 3: return ABS(left_p-right_p);
                case 4: return n+m - ABS((n-left_p)-right_p);
            }
        case 4:
            return ABS(left_p-right_p);
    }
    return 0;
}

int main(){
    int n, m, t, direction[100], pos[100], cur_d, cur_p;
    int i, j, sum = 0;

    scanf("%d %d", &m, &n);
    scanf("%d", &t);
    for (i = 0; i < t; i++)
        scanf("%d %d", &direction[i], &pos[i]);
    scanf("%d %d", &cur_d, &cur_p);
    for (i = 0; i < t; i++)
        sum += dist(n, m, cur_d, cur_p, direction[i], pos[i]);
    printf("%d\n", sum);
    return 0;
}
