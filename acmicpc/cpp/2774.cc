#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[21];
        int i, count = 0;
        bool check[10] = {0,};
        scanf("%s", str);
        for (i = 0; str[i]; i++){
            if (!check[str[i]-'0']){
                check[str[i]-'0'] = true;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
