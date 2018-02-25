#include <stdio.h>

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        int yonsei, korea;
        yonsei = korea = 0;
        for (int i = 0; i < 9; i++){
            int yscore, kscore;
            scanf("%d %d", &yscore, &kscore);
            yonsei += yscore;
            korea += kscore;
        }
        printf("%s\n", (yonsei>korea?"Yonsei":(korea>yonsei?"Korea":"Draw")));
    }
    return 0;
}
