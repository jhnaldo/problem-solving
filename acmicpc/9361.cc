#include <stdio.h>
#include <algorithm>

#define ABS(x) ((x)<0?-(x):(x))

int main(){
    int t, k = 1;

    scanf("%d", &t);
    while(t--){
        int n;
        int *origin;
        int *sorted;
        int sum = 0;
        int i, j;

        scanf("%d", &n);
        origin = new int[n]();
        sorted = new int[n]();
        for (i = 0; i < n; i++){
            scanf("%d", &origin[i]);
            sorted[i] = origin[i];
        }
        std::sort(sorted, sorted+n);

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (sorted[i] == origin[j]){
                    sum += ABS(j-i);
                    break;
                }
            }
        }
        printf("Case #%d: %d\n", k++, sum/2);

        delete[] origin;
        delete[] sorted;
    }
    return 0;
}
