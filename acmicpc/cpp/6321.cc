#include <stdio.h>

int main(){
    int n, k;
    scanf("%d", &n);
    for (k = 0; k < n; k++){
        int i;
        char str[51];
        scanf("%s", str);
        for (i = 0; str[i]; i++){
            if (str[i] == 'Z'){
                str[i] = 'A';
            }else{
                str[i]++;
            }
        }
        if (k) printf("\n");
        printf("String #%d\n%s\n", k+1, str);
    }
    return 0;
}
