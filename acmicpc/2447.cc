#include <stdio.h>
#include <string.h>

int main(){
    int n, k;
    char image[2187][2188];

    scanf("%d", &n);
    k = 1;
    strcpy(image[0], "*");

    while (k){
        char tmp[2188];
        int size, i;
        strcpy(tmp, image[--k]);
        size = strlen(tmp);

        if (strlen(tmp) == n){
            printf("%s\n", tmp);
        }else{
            for (i = 0; i < size; i++){
                image[k][i*3] = image[k][i*3+1] = image[k][i*3+2] = tmp[i];
                image[k+1][i*3] = image[k+1][i*3+2] = tmp[i];
                image[k+2][i*3] = image[k+2][i*3+1] = image[k+2][i*3+2] = tmp[i];
                image[k+1][i*3+1] = ' ';
            }
            image[k][i*3] = image[k+1][i*3] = image[k+2][i*3] = '\0';
            k+=3;
        }
    }

    return 0;
}
