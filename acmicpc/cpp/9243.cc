#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    char left[1001], right[1001];
    int lsize, rsize;

    scanf("%d\n%s\n%s", &n, left, right);
    lsize = strlen(left);
    rsize = strlen(right);
    if (lsize != rsize){
        printf("Deletion failed\n");
        return 0;
    }

    for (i = 0; i < lsize; i++){
        if (n%2){
            if (left[i] == right[i]){
                printf("Deletion failed\n");
                return 0;
            }
        }else{
            if (left[i] != right[i]){
                printf("Deletion failed\n");
                return 0;
            }
        }
    }
    printf("Deletion succeeded\n");
    return 0;
}
