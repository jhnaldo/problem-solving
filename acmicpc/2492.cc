#include <stdio.h>
#include <algorithm>

int main(){
    int n, m, t, size, max = 0;
    int x[100], y[100], x_sorted[100], y_sorted[100], max_x, max_y;
    int i, j, k;

    scanf("%d %d %d %d", &n, &m, &t, &size);
    for (i = 0; i < t; i++){
        scanf("%d %d", &x[i], &y[i]);
        x_sorted[i] = x[i];
        y_sorted[i] = y[i];
    }
    std::sort(x_sorted, x_sorted+t);
    std::sort(y_sorted, y_sorted+t);

    for (i = 0; i < t; i++){
        for (j = 0; j < t; j++){
            int from_x = x_sorted[i], from_y = y_sorted[j];
            int count = 0;
            for (k = 0; k < t; k++){
                if (from_x <= x[k] && x[k] <= from_x+size
                        && from_y <= y[k] && y[k] <= from_y+size){
                    count++;
                }
            }
            if (max < count){
                max = count;
                max_x = from_x;
                max_y = from_y;
            }
        }
    }
    printf("%d %d\n%d\n", max_x, max_y+size, max);
    return 0;
}
