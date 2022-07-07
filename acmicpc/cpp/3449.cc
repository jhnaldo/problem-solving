#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i, count = 0;
        char left[101], right[101];
        scanf("%s\n%s", left, right);
        for (i = 0; left[i]; i++){
            if (left[i] != right[i]) count++;
        }
        printf("Hamming distance is %d.\n", count);
    }
    return 0;
}
