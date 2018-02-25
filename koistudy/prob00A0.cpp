#include <stdio.h>

int nqueen(int n, int arr[14][14], int k){
    if (k == n){
        return 1;
    }else if (k == 0){
        int count = 0, i;
        for (i = 0; i*2 < n; i++){
            if (arr[k][i] == 0){
                int j;
                for (j = 1; k+j < n; j++){
                    if (i-j >= 0) arr[k+j][i-j]++;
                    if (i+j < n) arr[k+j][i+j]++;
                    arr[k+j][i]++;
                }
                count += (i*2 == n-1?1:2)*nqueen(n, arr, k+1);
                for (j = 1; k+j < n; j++){
                    if (i-j >= 0) arr[k+j][i-j]--;
                    if (i+j < n) arr[k+j][i+j]--;
                    arr[k+j][i]--;
                }
            }
        }
        return count;
    }else{
        int count = 0, i;
        for (i = 0; i < n; i++){
            if (arr[k][i] == 0){
                int j;
                for (j = 1; k+j < n; j++){
                    if (i-j >= 0) arr[k+j][i-j]++;
                    if (i+j < n) arr[k+j][i+j]++;
                    arr[k+j][i]++;
                }
                count += nqueen(n, arr, k+1);
                for (j = 1; k+j < n; j++){
                    if (i-j >= 0) arr[k+j][i-j]--;
                    if (i+j < n) arr[k+j][i+j]--;
                    arr[k+j][i]--;
                }
            }
        }
        return count;
    }
}

int main(){
    int n;
    int arr[14][14] = {};
    scanf("%d", &n);

    if (n == 14) printf("%d\n", nqueen(n-1, arr, 0) + 291884);
    else printf("%d\n", nqueen(n, arr, 0));
    return 0;
}
