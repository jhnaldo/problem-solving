#include <stdio.h>
#include <string.h>

int main(){
    int t, sum, k, size;
    char str[80];
    int i;

    scanf("%d", &t);
    for (; t > 0; t--){
        scanf("%s", str);
        size = strlen(str);
        sum = k = 0;
        for (i = 0; i < size; i++){
            if (str[i] == 'O') sum += ++k;
            else k = 0;
        }
        printf("%d\n", sum);
    }
    return 0;
}
