#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n;
    int count[13] = {}, i;
    scanf("%d", &n);
    srand(NULL);

    while (n--){
        count[(rand()%6+1)+(rand()%6+1)]++;
    }
    for (i = 2; i <= 12; i++)
        printf("%d ", count[i]);
    printf("\n");
    return 0;
}
