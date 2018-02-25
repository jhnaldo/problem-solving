#include <stdio.h>

int main(){
    int t, k = 1;
    scanf("%d", &t);
    while (t--){
        int exp, real;
        int fact;
        if (k > 1) printf("\n");
        scanf("%d %d", &exp, &real);

        printf("Data Set %d:\n", k++);
        if (exp <= real){
            printf("no ");
        }else{
            fact = 5;
            while (exp > fact * real){
                printf("mega ");
                fact *= 5;
            }
        }
        printf("drought\n");
    }
    return 0;
}
