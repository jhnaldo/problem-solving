#include <stdio.h>

int main(){
    int n, count_A = 0, count_B = 0;
    char str[16];

    scanf("%d", &n);
    scanf("%s", str);

    for (int i = 0; str[i]; i++){
        if (str[i] == 'A') count_A++;
        else count_B++;
    }
    if (count_B > count_A) printf("B\n");
    else if (count_B < count_A) printf("A\n");
    else printf("Tie\n");
    return 0;
}
