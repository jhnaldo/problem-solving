#include <stdio.h>
#include <string.h>

bool check(char left[], char right[]){
    int i;
    int size = strlen(left);
    if (strlen(right) != size) return false;
    for (i = 0; i < size; i++){
        if (left[i] != right[size-1-i]) return false;
    }
    return true;
}

int main(){
    int n, i, j;
    char str[100][15];
    bool solved = false;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s", str[i]);
        for (j = 0; j <= i; j++){
            if (!solved && check(str[i], str[j])){
                int size = strlen(str[i]);
                printf("%d %c\n", size, str[i][size/2]);
                solved = true;
            }
        }
    }
    return 0;
}
