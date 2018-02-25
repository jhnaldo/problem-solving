#include <stdio.h>

void swap(bool* &x, bool* &y){
    bool* tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n, k;
    bool *check, *_check;
    int *num;
    int i, j;
    scanf("%d %d", &n, &k);
    check = new bool[k+1]();
    _check = new bool[k+1]();
    num = new int[n];
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    check[0] = true;
    for (j = 0; j < n; j++){
        for (i = 0; i <= k; i++){
            if(num[j] <= i) _check[i] = check[i] || check[i-num[j]];
            else _check[i] = check[i];
        }
        swap(check, _check);
    }

    printf("%s\n", (check[k]?"YES":"NO"));

    delete[] check;
    delete[] _check;
    delete[] num;
    return 0;
}
