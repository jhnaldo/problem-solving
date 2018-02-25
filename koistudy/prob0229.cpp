#include <stdio.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n;
    int i, j, k;
    int arr[100];
    int max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            for (k = j+1; k < n; k++){
                int a = arr[i];
                int b = arr[j];
                int c = arr[k];

                if (a < b) swap(a,b);
                if (b < c) swap(b,c);
                if (a < b) swap(a,b);

                if (a < b+c && a+b+c > max) max = a+b+c;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
