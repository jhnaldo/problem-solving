#include <stdio.h>

int main(){
    int n;
    double sum = 0;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int a, b;
        int cur;
        scanf("%d %d", &a, &b);
        cur = a*100/b;
        if (cur < 40) printf("F 0.0\n");
        else if (cur == 100) {
            printf("A+ 4.3\n");
            sum += 4.3;
        }else {
            double hak;
            cur -= 40;
            switch(cur/15){
                case 0: printf("D"); hak = 1.0; break;
                case 1: printf("C"); hak = 2.0; break;
                case 2: printf("B"); hak = 3.0; break;
                case 3: printf("A"); hak = 4.0; break;
            }
            switch(cur%15 / 5){
                case 0: printf("- %.1lf\n", hak -= 0.3); break;
                case 1: printf("0 %.1lf\n", hak += 0.0); break;
                case 2: printf("+ %.1lf\n", hak += 0.3); break;
            }
            sum += hak;
        }
    }
    printf("%.2lf\n", sum/n);
    return 0;
}
