#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    bool check = false;
    for (i = 1; i <= 5; i++){
        char name[11];
        int size;
        scanf("%s", name);
        size = strlen(name);
        for (j = 0; j < size-2; j++){
            if (name[j] == 'F' && name[j+1] == 'B' && name[j+2] == 'I'){
                check = true;
                printf("%d ", i);
                break;
            }
        }
    }

    if (!check)
        printf("HE GOT AWAY!\n");
    else
        printf("\n");
    return 0;
}
