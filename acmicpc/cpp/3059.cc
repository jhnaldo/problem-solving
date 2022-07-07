#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int i, sum = 0;
        bool check[26] = {0,};
        char str[1001];
        scanf("%s", str);
        for (i = 0; str[i]; i++)
            check[str[i]-'A'] = true;
        for (i = 0; i < 26; i++){
            if (!check[i]) sum += 'A'+i;
        }
        printf("%d\n", sum);
    }
    return 0;
}
