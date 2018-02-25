#include <stdio.h>

#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

void pre(char arr[], int n, int k){
    if (k >= n) return;
    printf("%c ", arr[k]);
    pre(arr, n, LCHILD(k));
    pre(arr, n, RCHILD(k));
}

int main(){
    int n;
    char arr[21];

    scanf("%d", &n);
    scanf("%s", arr);
    pre(arr, n, 0);
    printf("\n");
    return 0;
}
