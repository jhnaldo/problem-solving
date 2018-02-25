#include <stdio.h>

#define MIN(a,b) ((a)<(b)?(a):(b))

int main(){
    int k;
    for (k = 1; true; k++){
        int n, i;
        int min[300000];
        scanf("%d", &n);
        if (!n) break;

        scanf("%d %d %d", &min[0], &min[1], &min[2]);
        min[0] = min[1];
        min[2] += min[1];
        for (i = 3; i < 3*n; i++){
            scanf("%d", &min[i]);
            switch (i%3){
                case 0:
                    min[i] += MIN(min[i-3], min[i-2]);
                    break;
                case 1:
                    min[i] += MIN(min[i-4], MIN(min[i-3], MIN(min[i-2], min[i-1])));
                    break;
                case 2:
                    min[i] += MIN(min[i-4], MIN(min[i-3], min[i-1]));
                    break;
            }
        }
        printf("%d. %d\n", k, min[3*n-2]);
    }
    return 0;
}
