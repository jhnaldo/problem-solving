#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char str[1001];
        int k = 0, sum = 0, i;
        scanf("\n%[^\n]s", str);
        for (i = 0; str[i]; i++){
            if (str[i] >= '0' && str[i] <= '9'){
                k *= 10;
                k += str[i]-'0';
            }else{
                sum += k;
                k = 0;
            }
        }
        if (k) sum += k;
        printf("%d\n", sum);
    }
    return 0;
}
