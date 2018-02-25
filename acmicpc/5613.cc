#include <stdio.h>

int main(){
    int num, k;
    char str[2];
    scanf("%d", &num);
    while (true){
        scanf("%s", str);
        switch(str[0]){
            case '+': scanf("%d", &k); num += k; break;
            case '-': scanf("%d", &k); num -= k; break;
            case '*': scanf("%d", &k); num *= k; break;
            case '/': scanf("%d", &k); num /= k; break;
            case '=': printf("%d\n", num); return 0;
        }
    }
    return 0;
}
