#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[1001];

int comp(const void* left, const void* right){
    return strcmp(str + *(int*)left, str + *(int*)right);
}

int main() {
    int i, len;
    int order[1000];

    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) order[i] = i;
    qsort(order, len, sizeof(int), comp);
    for (i = 0; i < len; i++){
        printf("%s\n", str+order[i]);
    }
    return 0;
}
