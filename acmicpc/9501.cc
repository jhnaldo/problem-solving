#include <stdio.h>

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        int n, d;
        int count = 0;

        scanf("%d %d", &n, &d);
        for (int i = 0; i < n; i++){
            int v, f, c;
            scanf("%d %d %d", &v, &f, &c);
            if (v * f / c >= d)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
