#include <stdio.h>

int main(){
    int i, num;
    bool asc, dsc;

    asc = dsc = true;
    for (i = 1; i <= 8; i++){
        scanf("%d", &num);
        if (num != i) asc = false;
        if (num != 8-i+1) dsc = false;
    }
    printf("%s\n", (asc?"ascending":(dsc?"descending":"mixed")));

    return 0;
}
