#include <stdio.h>

void check(int n, int m, int num, int& count){
    if (num >= n && num <= m){
        printf ("%d", num);
        count++;
        printf("%c", (count%10?' ':'\n'));
    }
}

int main(){
    int arr[] = {8, 5, 4, 9, 1, 7, 6, 3, 2, 0};
    int n, m, count = 0;
    int i, j;

    scanf("%d %d", &n, &m);

    for (i = 0; i < 9; i++){
        check (n, m, arr[i], count);
        for (j = 0; j < 10; j++){
            check (n, m, arr[i]*10 + arr[j], count);
        }
    }

    if (count % 10)
        printf("\n");

    return 0;
}
