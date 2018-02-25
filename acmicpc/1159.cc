#include <stdio.h>

int main(){
    int n, i;
    int count[26] = {0,};
    bool check = true;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        char name[31];
        scanf("%s", name);
        count[name[0]-'a']++;
    }

    for (i = 0; i < 26; i++){
        if (count[i] >= 5){
            printf("%c", i+'a');
            check = false;
        }
    }
    if (check) printf("PREDAJA");
    printf("\n");

    return 0;
}
