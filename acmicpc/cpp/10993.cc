#include <stdio.h>
#include <math.h>

void space(int n) { while(n--) printf(" "); }
void star(int n) { while(n--) printf("*"); }
void newline() { printf("\n"); }

void star_line(int n, int size, int k){
    if (n%2){
        space(size-1-k);
        if (k == 0){
            star(1);
        }else if (k < size/2){
            star(1);
            space(2*k-1);
            star(1);
        }else if (k < size-1){
            star(1);
            space(k-size/2);
            star_line(n-1, size/2, k-size/2);
            space((k-size/2)*2);
            star(1);
        }else{
            star(size*2-1);
        }
    }else{
        space(k);
        if (k == 0){
            star(size*2-1);
        }else if (k <= size/2){
            star(1);
            space(size/2-k);
            star_line(n-1, size/2, k-1);
            space((size/2-k)*2);
            star(1);
        }else if (k < size-1){
            star(1);
            space((size-1-k)*2-1);
            star(1);
        }else{
            star(1);
        }
    }
}

int main(){
    int n, i, size;
    scanf("%d", &n);
    size = pow(2,n)-1;
    for (i = 0; i < size; i++){
        star_line(n, size, i);
        newline();
    }
    return 0;
}
