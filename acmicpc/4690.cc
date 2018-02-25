#include <stdio.h>

int main(){
    int croot[1000000] = {0,};
    int i, a, b, c;
    for (i = 1; i <= 100; i++)
        croot[i*i*i] = i;
    for (a = 2; a <= 100; a++){
        for (b = 2; b <= a; b++){
            for (c = b; c <= a; c++){
                int d3 = a*a*a-b*b*b-c*c*c;
                if (d3 > c*c*c && croot[d3]){
                    printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, croot[d3]);
                }
            }
        }
    }
    return 0;
}
