#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int r, e, c;
        scanf("%d %d %d", &r, &e, &c);
        if (r > e - c) printf("do not advertise\n");
        else if (r < e - c) printf("advertise\n");
        else printf("does not matter\n");
    }
    return 0;
}
