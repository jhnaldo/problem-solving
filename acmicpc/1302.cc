#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b){
    char* left = *(char**)a;
    char* right = *(char**)b;
    return strcmp(left, right);
}

int main(){
    int n, count, max, max_ind;
    char* str[1000];
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        str[i] = new char[51];
        scanf("%s", str[i]);
    }
    qsort(str, n, sizeof(char*), comp);

    max = max_ind = 0;
    count = 1;
    for (i = 1; i < n; i++){
        if (strcmp(str[i-1], str[i])){
            count = 1;
        }else{
            count++;
            if (max < count){
                max = count;
                max_ind = i;
            }
        }
    }
    printf("%s\n", str[max_ind]);
    return 0;
}
