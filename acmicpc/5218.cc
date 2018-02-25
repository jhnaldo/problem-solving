#include <stdio.h>

int diff(char left, char right){
    int lval = left-'A'+1;
    int rval = right-'A'+1;

    if (lval <= rval) return rval-lval;
    else return rval+26-lval;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i;
        char left[21], right[21];
        scanf("%s %s", left, right);
        printf("Distances:");
        for (i = 0; left[i]; i++){
            printf(" %d", diff(left[i], right[i]));
        }
        printf("\n");
    }
    return 0;
}
