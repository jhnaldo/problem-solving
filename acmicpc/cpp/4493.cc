#include <stdio.h>

#define R(x) ((x)=='R')
#define S(x) ((x)=='S')
#define P(x) ((x)=='P')

int main(){
    int t;

    scanf("%d", &t);
    while(t--){
        int n;
        int score1, score2;
        char rsp1, rsp2;

        scanf("%d", &n);

        score1 = score2;
        for (int i = 0; i < n; i++){
            scanf("\n%c %c", &rsp1, &rsp2);
            if ((R(rsp1) && S(rsp2))
                    || (S(rsp1) && P(rsp2))
                    || (P(rsp1) && R(rsp2))){
                score1++;
            }else if ((R(rsp2) && S(rsp1))
                    || (S(rsp2) && P(rsp1))
                    || (P(rsp2) && R(rsp1))){
                score2++;
            }
        }

        if (score1 > score2) printf("Player 1\n");
        else if (score1 < score2) printf("Player 2\n");
        else printf("TIE\n");
    }
    return 0;
}
