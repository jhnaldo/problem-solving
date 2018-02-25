#include <stdio.h>

#define MAX(a,b) (a>b?a:b)
#define SUM(p) (num[p][0]+num[p][1]*2+num[p][2]*3)

bool bigger (int num[3][3], int p, int q){
    int psum = SUM(p);
    int qsum = SUM(q);
    if (psum > qsum) return true;
    if (psum < qsum) return false;
    if (num[p][2] > num[q][2]) return true;
    if (num[p][2] < num[q][2]) return false;
    if (num[p][1] > num[q][1]) return true;
    return false;
}

int main(){
    int n, score, max;
    int num[3][3] = {0,};
    int i, j;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &score);
            num[j][score-1]++;
        }
    }
    max = 0;
    for (i = 0; i < 3; i++){
        int total = SUM(i);
        max = MAX(max, total);
    }
    if (bigger(num, 0, 1) && bigger(num, 0, 2)) printf("1");
    else if (bigger(num, 1, 0) && bigger(num, 1, 2)) printf("2");
    else if (bigger(num, 2, 0) && bigger(num, 2, 1)) printf("3");
    else printf("0");
    printf(" %d\n", max);
    return 0;
}
