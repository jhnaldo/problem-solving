#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 3:
        case 4:
        case 5:
            printf("spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("winter\n");
            break;
    }
    return 0;
}
