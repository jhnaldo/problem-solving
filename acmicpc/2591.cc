#include <stdio.h>

int main(){
    char str[41];
    int i, count[41];

    scanf("%s", str);
    count[0] = 1;
    count[1] = (str[0]!='0');
    for (i = 2; str[i-1]; i++){
        count[i] = (str[i-1]=='0'?0:count[i-1]);
        if (str[i-2] == '1' || str[i-2] == '2' || (str[i-2] == '3' && str[i-1] <= '4'))
            count[i] += count[i-2];
    }
    printf("%d\n", count[i-1]);
    return 0;
}
