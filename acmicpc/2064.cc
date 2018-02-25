#include <stdio.h>
#include <string.h>

void binary(char str[33], int a, int b, int c, int d){
    for (int i = 7; i >= 0; i--){
        str[i] = '0' + a % 2;
        str[i+8] = '0' + b % 2;
        str[i+16] = '0' + c % 2;
        str[i+24] = '0' + d % 2;

        a /= 2;
        b /= 2;
        c /= 2;
        d /= 2;
    }
    str[32] = '\0';
}

int main(){
    int n, k = 32;
    int a, b, c, d, i, j;
    char prev[33], cur[33];

    scanf("%d", &n);
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    binary(prev, a, b, c, d);
    for (i = 1; i < n; i++){
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        binary(cur, a, b, c, d);
        for (j = 0; j < k; j++){
            if (cur[j] != prev[j])
                break;
        }
        k = j;
        strcpy(prev, cur);
    }

    for (i = 0; i < 4; i++){
        int decimal = 0;
        for (j = 0; j < 8; j++){
            decimal *= 2;
            if(i*8+j < k && prev[i*8+j] == '1') decimal++;
        }
        printf("%d", decimal);
        printf("%c", (i<3?'.':'\n'));
    }
    for (i = 0; i < 4; i++){
        int decimal = 0;
        for (j = 0; j < 8; j++){
            decimal *= 2;
            if(i*8+j < k) decimal++;
        }
        printf("%d", decimal);
        printf("%c", (i<3?'.':'\n'));
    }
    return 0;
}
