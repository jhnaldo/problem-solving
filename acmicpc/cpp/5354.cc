#include <stdio.h>

int main(){
    int t, n;
    int i, j;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%d", &n);
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++)
                printf ("%c", ((i>0 && i<n-1)&&(j>0 && j<n-1)?'J':'#'));
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
