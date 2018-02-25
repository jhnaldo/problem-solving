#include <stdio.h>

int main(){
    int n;
    int sum = 0, cur = 0;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int score;
        scanf("%d", &score);
        if (score){
            sum += ++cur;
        }else{
            cur = 0;
        }
    }
    printf("%d\n", sum);

    return 0;
}
