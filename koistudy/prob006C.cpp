#include <stdio.h>

int main(){
    unsigned int a;
    scanf("%u", &a);
    printf("%s\n", ((a%400 == 0) || ((a%100 != 0) && (a%4 == 0))? "Leap":"Normal"));
    return 0;
}
