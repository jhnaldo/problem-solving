#include <stdio.h>

int main(){
    int trans[17][2] = {
        { 0,  0},
        { 8,  2},
        { 3,  0},
        { 4,  0},
        { 4,  5},
        {10,  6},
        { 7,  6},
        {14, 11},
        { 0,  9},
        {10, 12},
        { 0, 11},
        {10, 12},
        {13,  0},
        {14,  0},
        {14, 15},
        {10, 16},
        { 7, 16},
    };
    char str[401];
    int cur = 1;
    int i;
    scanf("%s", str);
    for (i = 0; str[i]; i++)
        cur = trans[cur][str[i]-'0'];
    switch (cur){
        case 5:
        case 6:
        case 9:
        case 11:
        case 15:
        case 16:
            printf("SUB\n");
            break;
        default:
            printf("Not SUB\n");
    }
    return 0;
}
