#include <stdio.h>

#define MIN(a,b) (a<b?a:b)

int main(){
    int burger[3];
    int drink[2];
    int i;

    for (i = 0; i < 3; i++)
        scanf("%d", &burger[i]);

    for (i = 0; i < 2; i++)
        scanf("%d", &drink[i]);

    printf("%d\n", MIN(burger[0], MIN(burger[1] ,burger[2]))+MIN(drink[0], drink[1])-50);
}
