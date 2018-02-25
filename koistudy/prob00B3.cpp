#include <stdio.h>

#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

void post(char arr[], int n, int k){
    if (k >= n) return;
    post(arr, n, LCHILD(k));
    post(arr, n, RCHILD(k));
    printf("%c ", arr[k]);
}

int main(){
    int n;
    char arr[21];

    scanf("%d", &n);
    scanf("%s", arr);
    post(arr, n, 0);
    printf("\n");
    return 0;
}
