#include <stdio.h>
#include <string.h>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

void swap(char* &x, char* &y){
    char *tmp = x;
    x = y;
    y = tmp;
}

void print(int k, char *prev, char *cur, int before, int size, int n){
    printf("%s\n", cur);
    if (k < n){
        strcpy(prev+before, cur);
        swap(prev, cur);
        before += size;
        swap(before, size);
        print(k + 1, prev, cur, before, size, n);
    }
}

int main(){
    int n;
    char *prev = new char[10001]();
    char *cur = new char[10001]();
    scanf("%d", &n);

    cur[0] = '*';
    print(1, prev, cur, 0, 1, n);

    delete[] prev;
    delete[] cur;
    return 0;
}
