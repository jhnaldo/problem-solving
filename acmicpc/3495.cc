#include <stdio.h>

int main(){
    int n, m, i, j;
    int count = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++){
        char str[101];
        bool check = false;
        scanf("%s", str);
        for (j = 0; str[j]; j++){
            if (str[j] == '.'){
                if (check) count += 2;
            }else{
                count++;
                check = !check;
            }
        }
    }
    printf("%d\n", count/2);
    return 0;
}
