#include <stdio.h>

bool check(char str[], char str2[], int size){
    int i;
    for (i = 0; i < size; i++){
        if (str[i] != str2[i*2] || str[i] != str2[i*2+1])
            return false;
    }
    return true;
}

int main(){
    int n, m, i;
    char str[10][11];
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        scanf("%s", str[i]);
    for (i = 0; i < n; i++){
        char eyfa[21];
        scanf("%s", eyfa);
        if (!check(str[i], eyfa, m))
            break;
    }
    printf("%sEyfa\n", (i==n?"":"Not "));
    return 0;
}
