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

char* fibo(int k, char *prev, char *cur, int before, int size, int n, char* dots = NULL){
    if (dots){
        dots[strlen(dots) - size + before] = '\0';
        printf("%s%s\n", dots, cur);
    }
    if (k < n){
        strcpy(prev+before, cur);
        swap(prev, cur);
        before += size;
        swap(before, size);
        return fibo(k + 1, prev, cur, before, size, n, dots);
    }
    return cur;
}

int main(){
    int n;
    char *prev = new char[10001]();
    char *cur = new char[10001]();
    char *dots = new char[10001]();

    scanf("%d", &n);

    prev[0] = '\0';
    cur[0] = '.';
    cur[1] = '\0';
    strcpy(dots, fibo(1, prev, cur, 0, 1, n));

    prev[0] = '\0';
    cur[0] = '*';
    cur[1] = '\0';
    fibo(1, prev, cur, 0, 1, n, dots);

    delete[] prev;
    delete[] cur;
    return 0;
}
