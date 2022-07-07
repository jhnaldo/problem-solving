#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    while(n--){
        int student, apple;
        scanf("%d %d", &student, &apple);
        sum += apple % student;
    }
    printf("%d\n", sum);
    return 0;
}
