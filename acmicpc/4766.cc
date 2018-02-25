#include <stdio.h>

int main(){
    double before;
    scanf("%lf", &before);
    while (true){
        double cur;
        scanf("%lf", &cur);
        if (cur == 999) break;
        printf("%.2lf\n", cur-before);
        before = cur;
    }
    return 0;
}
