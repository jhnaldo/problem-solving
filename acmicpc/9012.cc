#include <stdio.h>
#include <string.h>

int main(){
    int n, size;
    char paren[51];
    int count, i;

    scanf("%d", &n);
    for(; n > 0; n--){
        scanf("%s", paren);
        size = strlen(paren);
        count =0;
        for (i = 0; i < size; i++){
            if (paren[i]=='('){
                count++;
            }else{
                count--;
                if (count == -1)
                    break;
            }
        }
        printf("%s\n", (count?"NO":"YES"));
    }
    return 0;
}
