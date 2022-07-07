#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int w, h, i;
        char map[11][12];
        scanf("%d %d", &w, &h);
        for (i = 0; i < w; i++){
            scanf("%s", map[i]);
        }
        for (i = w-1; i >= 0; i--){
            printf("%s\n", map[i]);
        }
    }
    return 0;
}
