#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 100000

int age[MAX_NUM];

int compare(const void *left, const void *right){
    int lidx = *(int*)left;
    int ridx = *(int*)right;
    int diff = age[lidx] - age[ridx];
    if (diff) return diff;
    return lidx - ridx;
}

int main(){
    int n, i;
    int order[MAX_NUM];
    char** name;

    scanf("%d", &n);
    name = new char*[n];
    for (i = 0; i < n; i++){
        name[i] = new char[101];
        scanf("%d %s", &age[i], name[i]);
        order[i] = i;
    }

    qsort(order, n, sizeof(int), compare);

    for (i = 0; i < n; i++){
        printf("%d %s\n", age[order[i]], name[order[i]]);
        delete[] name[order[i]];
    }
    delete[] name;
    return 0;
}
