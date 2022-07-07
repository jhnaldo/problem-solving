#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void* a, const void* b){
    char *left = *(char**)a;
    char *right = *(char**)b;
    return strcmp(left, right);
}

int main(){
    int n, m;
    char **str1, **str2, **str;
    int i, j, count;

    scanf("%d %d", &n, &m);

    str1 = new char*[n];
    for (i = 0; i < n; i++){
        str1[i] = new char[21];
        scanf("%s", str1[i]);
    }
    qsort(str1, n, sizeof(char*), comp);

    str2 = new char*[m];
    for (i = 0; i < m; i++){
        str2[i] = new char[21];
        scanf("%s", str2[i]);
    }
    qsort(str2, m, sizeof(char*), comp);

    count = 0;
    str = new char*[n];
    for (i = 0, j = 0; i < n && j < m;){
        int k = strcmp(str1[i], str2[j]);
        if (k < 0){
            i++;
        }else if (k > 0){
            j++;
        }else{
            str[count] = new char[21];
            strcpy(str[count], str1[i]);
            count++;
            i++; j++;
        }
    }

    printf("%d\n", count);
    for (i = 0; i < count; i++)
        printf("%s\n", str[i]);

    return 0;
}
