#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i;
        int arr[7];
        int sum = 0;
        double table[7][4] = {
            {9.23076,   26.7,   1.835,  1},
            {1.84523,   75,     1.348,  0},
            {56.0211,   1.5,    1.05,   0},
            {4.99087,   42.5,   1.81,   1},
            {0.188807,  210,    1.41,   0},
            {15.9803,   3.8,    1.04,   0},
            {0.11193,   254,    1.88,   1}};
        for (i = 0; i < 7; i++){
            scanf("%d", &arr[i]);
            sum += int(table[i][0] * pow ((table[i][3]?1:-1) * (table[i][1] - arr[i]), table[i][2]));
        }

        printf("%d\n", sum);
    }
    return 0;
}
