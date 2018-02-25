#include <stdio.h>

int main(){
    int ans[6] = {1,1,2,2,2,8}, cur;
    int i;

    for (i = 0; i < 6; i++){
        scanf("%d", &cur);
        printf("%d ", ans[i]-cur);
    }
    printf("\n");

    return 0;
}
