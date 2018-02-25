#include <stdio.h>

int main(){
    int n;
    int hstack[500000], istack[500000], size = 0;
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int height;
        scanf("%d", &height);
        while (size && hstack[size-1] < height) size--;
        printf("%d ", (size?istack[size-1]:0));
        hstack[size] = height;
        istack[size] = i+1;
        size++;
    }
    printf("\n");
    return 0;
}
