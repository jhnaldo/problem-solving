#include <stdio.h>

int main(){
    char str[11];
    int i, max = 0;
    int count[10] = {0,};

    scanf("%s", str);
    for (i = 0; str[i]; i++){
        count[str[i]-'0']++;
    }

    count[6] += count[9];
    count[6] = (count[6]+1)/2;
    count[9] = 0;
    for (i = 0; i < 10; i++)
        if (max < count[i]) max = count[i];
    printf("%d\n", max);

    return 0;
}
