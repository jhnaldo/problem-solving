#include <stdio.h>

int norm(int h, int m){
    return h*60+m;
}

void restore(int n, int &h, int &m){
    h = n/60;
    m = n%60;
}

int main(){
    int n, winner, score = 0, count1 = 0, count2 = 0, before = 0, i;
    int h, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int h, m, n;
        scanf("%d %d:%d", &winner, &h, &m);
        n = norm(h, m);

        if (score > 0){
            count1 += n-before;
        }else if (score < 0){
            count2 += n-before;
        }

        if (winner == 1){
            score++;
        }else{
            score--;
        }

        before = n;
    }

    n = 48*60;
    if (score > 0){
        count1 += n-before;
    }else if (score < 0){
        count2 += n-before;
    }

    restore(count1, h, m);
    printf("%02d:%02d\n", h, m);
    restore(count2, h, m);
    printf("%02d:%02d\n", h, m);
    return 0;
}
