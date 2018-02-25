#include <stdio.h>

bool check(int n){
    int rev = 0;
    int sum = n, arr[10], size;
    int i;

    for (; n; n /= 10) { rev *= 10; rev += n%10; }
    sum += rev;
    for (i = 0; sum; i++){
        arr[i] = sum%10;
        sum /= 10;
    }
    size = i;
    for (i = 0; i < size/2; i++)
        if (arr[i] != arr[size-1-i]) return false;
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        printf("%s\n", (check(n)?"YES":"NO"));
    }
    return 0;
}
