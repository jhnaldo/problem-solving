#include <stdio.h>

int main(){
    char str[101];
    int i, k = 0;
    int sum = 0;

    i = 0;
    while(scanf("%s", str+i) != EOF){
        for (i = 0; str[i]; i++);
    }
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
    return 0;
}
