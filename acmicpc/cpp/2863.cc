#include <stdio.h>

void add(int lja, int lmo, int rja, int rmo, int &aja, int &amo){
    aja = lja*rmo + rja*lmo;
    amo = lmo*rmo;
}

void cal(int mat[2][2], int &ja, int &mo){
    add (mat[0][0], mat[1][0], mat[0][1], mat[1][1], ja, mo);
}

void rotate(int mat[2][2]){
    int tmp = mat[0][0];
    mat[0][0] = mat[1][0];
    mat[1][0] = mat[1][1];
    mat[1][1] = mat[0][1];
    mat[0][1] = tmp;
}

int main(){
    int mat[2][2], i, j;
    int max_ja, max_mo, count = 0, tmp;
    int arr[4];

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            scanf("%d", &mat[i][j]);
    }

    cal(mat, max_ja, max_mo);
    for (i = 1; i <= 3; i++){
        int res_ja, res_mo;
        rotate(mat);
        cal(mat, res_ja, res_mo);
        if (res_ja*max_mo > max_ja*res_mo){
            max_ja = res_ja;
            max_mo = res_mo;
            count = i;
        }
    }
    printf("%d\n", count);
    return 0;
}
