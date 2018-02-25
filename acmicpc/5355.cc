#include <stdio.h>

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        double n;
        char ch = '\0';

        scanf("%lf", &n);
        while(ch != '\n'){
            scanf("%c", &ch);
            switch(ch){
                case '@': n *= 3; break;
                case '%': n += 5; break;
                case '#': n -= 7; break;
            }
        }
        printf("%.2lf\n", n);
    }
    return 0;
}
