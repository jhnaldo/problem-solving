#include <stdio.h>

int main(){
    int n, height;
    scanf("%d", &n);

    height = 0;
    n--;
    while (n >= 0){
        height++;
        n -= height*height + (height+1)*(height+1);
    }
    printf("%d\n", height);
    return 0;
}
