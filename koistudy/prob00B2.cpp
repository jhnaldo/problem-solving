#include <stdio.h>

#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

void in(char arr[], int n, int k){
    if (k >= n) return;
    in(arr, n, LCHILD(k));
    printf("%c ", arr[k]);
    in(arr, n, RCHILD(k));
}

int main(){
    int n;
    char arr[21];

    scanf("%d", &n);
    scanf("%s", arr);
    in(arr, n, 0);
    printf("\n");
    return 0;
}
