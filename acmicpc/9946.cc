#include <stdio.h>
#include <string.h>

bool check(int arr[26], int aarr[26]){
    int i;
    for (i = 0; i < 26; i++)
        if (arr[i] != aarr[i]) return false;
    return true;
}

int main(){
    char str[1001];
    char after[1001];
    int c = 1;

    scanf("%s\n%s", str, after);
    while (strcmp(str, "END")){
        int arr[26] = {0,}, aarr[26] = {0,};
        int size = strlen(str), asize = strlen(after);
        int i;

        for (i = 0; i < size; i++) arr[str[i]-'a']++;
        for (i = 0; i < asize; i++) aarr[after[i]-'a']++;

        printf("Case %d: %s\n", c, (check(arr, aarr)?"same":"different"));
        scanf("%s\n%s", str, after);
        c++;
    }
    return 0;
}
