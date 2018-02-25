#include <stdio.h>
#include <stdlib.h>

class Team{
public:
    int point;
    int goal;
    int most;
    int index;
};

int comp(const void *left, const void *right){
    Team *lteam = (Team*)left;
    Team *rteam = (Team*)right;
    if (lteam->point != rteam->point) return rteam->point - lteam->point;
    if (lteam->goal != rteam->goal) return rteam->goal - lteam->goal;
    if (lteam->most != rteam->most) return rteam->most - lteam->most;
    return rteam->index - lteam->index;
}

int main(){
    int i;
    Team arr[4];
    for (i = 0; i < 4; i++){
        int win, draw, lose;
        scanf("%d %d %d %d %d", &win, &draw, &lose, &arr[i].goal, &arr[i].most);
        arr[i].point = 3*win + draw;
        arr[i].index = i+1;
    }

    qsort(arr, 4, sizeof(Team), comp);

    for (i = 0; i < 2; i++)
        printf("%d\n", arr[i].index);
    return 0;
}
