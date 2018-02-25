#include <stdio.h>

#define NUM(k) (k>='0' && k<='9')

int main(){
    char str[5000001];
    int size;
    long long int sum, num;
    int i;

    scanf("%d", &size);
    scanf("%s", str);
    sum = num = 0;

    for (i = 0; i < size; i++){
        if (NUM(str[i])){
            num *= 10;
            num += str[i]-'0';
        }else{
            sum += num;
            num = 0;
        }
    }
    sum += num;
    printf("%lld\n", sum);
    return 0;
}
