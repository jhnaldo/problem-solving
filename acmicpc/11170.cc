#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i, until, count = 0;
        scanf("%d %d", &i, &until);
        for (; i <= until; i++){
            int k = i;
            if (k == 0) count++;
            while (k){
                if (k%10 == 0)
                    count++;
                k /= 10;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
