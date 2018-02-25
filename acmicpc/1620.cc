#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char name[100000][21];

int comp(const void *a, const void *b){
    int left = *(int*)a;
    int right = *(int*)b;
    return strcmp(name[left], name[right]);
}

int binary_search (int arr[], int from, int to, char str[]){
    int mid = (from+to)/2;
    int result = strcmp(str, name[arr[mid]]);
    if (result < 0){
        return binary_search (arr, from, mid, str);
    }else if(result > 0){
        return binary_search (arr, mid+1, to, str);
    }else{
        return arr[mid];
    }
}

int main(){
    int n, m;
    int sorted[100000];
    char input[21];
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        scanf("%s", name[i]);
        sorted[i] = i;
    }
    qsort(sorted, n, sizeof(int), comp);

    for (i = 0; i < m; i++){
        scanf("%s", input);
        if (input[0] >= '0' && input[0] <= '9'){
            printf("%s\n", name[atoi(input)-1]);
        }else{
            printf("%d\n", binary_search(sorted, 0, n, input)+1);
        }
    }
    return 0;
}
