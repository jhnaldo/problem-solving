#include <stdio.h>

void swap (int& n, int& m){
    int tmp = n;
    n = m;
    m = tmp;
}

int main(){
    int t;

    scanf("%d", &t);
    for (; t > 0; t--){
        int num, max[3] = {0,};
        int i, j;

        for (i = 0; i < 10; i++){
            scanf("%d", &num);
            for (j = 0; j < 3; j++){
                if (max[j] < num)
                    swap(max[j], num);
            }
        }
        printf("%d\n", max[2]);
    }
    return 0;
}
