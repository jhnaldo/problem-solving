#include <stdio.h>
#include <string.h>

long long int sum(char num[]){
    long long int size = strlen(num), sum = 0;
    int i;
    for (i = 0; i < size; i++){
        sum += num[i]-'0';
    }
    return sum;
}

int main(){
    char a[10001], b[10001];

    scanf("%s %s", a, b);
    printf("%lld\n", sum(a)*sum(b));
    return 0;
}
