#include <stdio.h>

void ancestor(int arr[], int &size, int n){
    for (size = 0; n; size++){
        arr[size] = n;
        n /= 2;
    }
}

int main(){
    int n, m;
    int n_arr[40], n_size;
    int m_arr[40], m_size;
    int i, j;
    scanf("%d %d", &n, &m);
    ancestor(n_arr, n_size, n);
    ancestor(m_arr, m_size, m);

    for (i = n_size-1, j = m_size-1; i >= 0 && j >= 0 && n_arr[i] == m_arr[j]; i--, j--);
    printf("%d\n", i+j+2);
    return 0;
}
