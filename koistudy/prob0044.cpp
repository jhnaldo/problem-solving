#include <stdio.h>

int main(){
    int n;
    char ch;
    scanf("%c", &ch);
    switch(ch){
        case 'A': printf("best!!!\n"); break;
        case 'B': printf("good!!\n"); break;
        case 'C': printf("run!\n"); break;
        case 'D': printf("slowly~\n"); break;
        default: printf("what?\n"); break;
    }
    return 0;
}
