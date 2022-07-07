#include <stdio.h>

int main(){
    int n, m, i, count = 0, start, before = -1;
    char str[1000001];
    scanf("%d %d", &n, &m);
    scanf("%s", str);
    for (i = 0, before = -1, start = -1; i < m; i++){
        if (str[i] == 'I'){
            if (before == -1 || before != i-2){
                start = i;
            }else{
                if (i-start >= n*2){
                    count++;
                }
            }
            before = i;
        }
    }
    printf("%d\n", count);
    return 0;
}
