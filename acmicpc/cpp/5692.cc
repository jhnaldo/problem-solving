#include <stdio.h>

int f2d(int n){
    int arr[5], i, result = 0, fac = 1;
    for (i = 1; n; i++){
        fac *= i;
        result += (n%10)*fac;
        n /= 10;
    }
    return result;
}

int main(){
    while (true){
        int fnum;
        scanf("%d", &fnum);
        if (!fnum) break;
        printf("%d\n", f2d(fnum));
    }
    return 0;
}
