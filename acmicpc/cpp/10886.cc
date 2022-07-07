#include <stdio.h>

int main(){
    int n, count = 0, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int tf;
        scanf("%d", &tf);
        if (tf) count++;
        else count--;
    }
    printf("%s\n", (count<0?"Junhee is not cute!":"Junhee is cute!"));
    return 0;
}
