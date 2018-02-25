#include <stdio.h>
#include <string.h>

int main(){
    int n, k;
    char image[3072][6144];
    int i, j;

    scanf("%d", &n);
    strcpy(image[0], "  *  ");
    strcpy(image[1], " * * ");
    strcpy(image[2], "*****");
    k = 3;

    for (k = 3; k < n; k *= 2){
        for (i = 0; i < k; i++){
            for (j = 0; j < k*2-1; j++){
                image[k+i][j] = image[k+i][2*k+j] = image[i][j];
            }
            image[k+i][j] = ' ';
            image[k+i][2*k+j] = '\0';
        }
        for (i = 0; i < k; i++){
            for (j = k*2-2; j >= 0; j--) image[i][j+k] = image[i][j];
            for (j = 0; j < k; j++) image[i][j] = image[i][4*k-j-2] = ' ';
            image[i][4*k-1] = '\0';
        }
    }

    for (i = 0; i < n; i++){
        printf("%s\n", image[i]);
    }

    return 0;
}
