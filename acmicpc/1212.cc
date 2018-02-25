#include <stdio.h>
#include <string.h>

int main(){
    char oct2bin0[8][4] = {"0", "1", "10", "11", "100", "101", "110", "111"};
    char oct2bin[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    char oct[333335];
    int size, i;

    scanf("%s", oct);
    size = strlen(oct);
    printf("%s", oct2bin0[oct[0]-'0']);
    for (i = 1; i < size; i++)
        printf("%s", oct2bin[oct[i]-'0']);
    printf("\n");
    return 0;
}
